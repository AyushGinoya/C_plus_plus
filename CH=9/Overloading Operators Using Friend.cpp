/*
Overload operator ‘*’ such that multiplication from and to normal integer work the same
way, like, M * v and v * M, where M is an object, v is a value.
*/

#include<iostream>
using namespace std;

const int size=3;

class vector
{
    int v[size];
public:
    vector();
    vector(int *x);
    friend istream & operator >> (istream &din,vector &p);
    friend ostream & operator << (ostream &dout,vector &q);
    friend vector operator *(int a, vector b);
    friend vector operator *(vector b,int a);
};
vector::vector()
{
    for(int i=0;i<size;i++)
    {
        v[i]=0;
    }
}
vector :: vector(int *x)
{
    for(int i=0;i<size;i++)
    {
        v[i]=x[i];
    }
}
istream & operator >> (istream &din,vector &p)
{
    for(int i=0;i<size;i++)
    {
        din>>p.v[i];
    }
}

ostream & operator << (ostream &dout,vector &q)
{
    for(int i=0;i<size;i++)
    {
        dout<<q.v[i]<<"  ";
    }
}

vector operator *(int a, vector b)
{
    vector c;
    for(int i=0;i<size;i++)
    {
        c.v[i]=a*b.v[i];
    }
    return c;
}

vector operator *( vector b,int a)
{
    vector c;
    for(int i=0;i<size;i++)
    {
        c.v[i]=b.v[i]*a;
    }
    return c;
}
int x[size] = {2,4,6};

int main()
{

    vector p;
    vector m=x;
    cout << "Enter elements of vector m " << "\n";
    cin >> p;
    cout << "\n";
    cout << "p = " << p << "\n";
    vector j,k;
    j=2*p;
    k=m*2;
    cout << "\n";
    cout << "j = " << j<< "\n";
    cout << "k = " << k << "\n";


}

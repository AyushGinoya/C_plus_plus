/*
Overload operator ‘*’ such that multiplication from and to normal integer work the same
way, like, M * v and v * M, where M is an object, v is a value.

OR

Overload operator ‘/’ such that division from and to normal integer work the same way, like,
M / v and v / M, where M is an object, v is a value.
*/

#include<iostream>
using namespace std;

const int size=3;
class multi
{
    int v[size];
public:

    multi()
    {
        for(int i=0;i<size;i++)
        {
            v[i]=0;
        }
    }
    multi (int *x)
    {
        for(int i=0;i<size;i++)
        {
            v[i]=x[i];
        }
    }
    friend multi operator / (int a,multi &b)
    {
        multi jump;
        for(int i=0;i<size;i++)
        jump.v[i]=a / b.v[i];
        return jump;
    }

    friend multi operator / (multi &b,int a)
    {
        multi jump;
        for(int i=0;i<size;i++)
        jump.v[i]=b.v[i] / a;
        return jump;
    }
    void show()
    {
        for(int i=0;i<size;i++)
        cout<<v[i]<<"   ";
    }
};
int x[size]={2,4,6};
int main()
{
    multi m;
    multi r=x;
    multi p,q;
    int b=2;
    p=b / r;
    q=r / b;
    p.show();
    cout<<endl;
    q.show();
}

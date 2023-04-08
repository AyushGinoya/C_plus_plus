#include<iostream >

using namespace std;

class Distance
{
    int f;
    int i;
public:
    Distance(){}
    Distance(int a,int b)
    {
        f=a;
        i=b;
    }
    void showdata();

Distance operator + (Distance c)
{
    Distance temp;
    temp.i=i+c.i;
    int m=temp.i/12;
    temp.i=temp.i%12;
    temp.f=f+m+c.f;
    return temp;
}

Distance operator - (Distance p)
{
    Distance jump;
    jump.i=i-p.i;
    int m=jump.i/12;
    jump.i=jump.i%12;
    jump.f=f-p.f+m;
    if(jump.i<0)
    {
        jump.i=jump.i+12;
        jump.f--;
    }
    return jump;
}
};

void Distance :: showdata()
{
        cout<<f<<"feet "<<i<<"Inches"<<endl;
}

int main()
{

    Distance d1(7,30),d2(3,62),d3,d4;
    d3=d1+d2;
    d4=d1-d2;
    cout<<"Addition is :"<<endl;
    d3.showdata();
    cout<<"sub is : "<<endl;
    d4.showdata();
    return 0;
}

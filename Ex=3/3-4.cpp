#include<iostream>
using namespace std;

class complex
{

    int img;
    int real;
private:
    friend void aayu(complex c1,complex c2,int a,int b,int c,int d);
};

void aayu(complex c1,complex c2,int a,int b,int c,int d)
{
    c1.real=(a+c);
    c1.img=(b+d);

    c2.real=(a-c);
    c2.img=(b-d);




    if(c1.img>=0)
    {
    cout<<c1.real<<"+"<<c1.img<<"i"<<endl;
    }
    else
    {
    cout<<c1.real<<c1.img<<"i"<<endl;
    }

      if(c2.img>=0)
    {
    cout<<c2.real<<" + "<<c2.img<<"i"<<endl;
    }
    else
    {
    cout<<c2.real<<c2.img<<"i"<<endl;
    }
}

int main()
{

    complex c1,c2;
    int a,b,c,d;
    cout<<"enter a,b,c,d : "<<endl;
    cin>>a>>b;
    cin>>c>>d;
    aayu(c1,c2,a,b,c,d);
}

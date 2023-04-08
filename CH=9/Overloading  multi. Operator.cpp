#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
public:
    complex(){}
    complex(int p,int q)
    {
        a=p;
        b=q;
    }
    complex operator * (complex r)
    {
        complex temp;
        temp.a=(a*r.a-b*r.b);
        temp.b=(a*r.b+r.a*b);
        return temp;
    }
    void show()
    {
        cout<<a<<"+"<<b<<"j"<<endl;
    }
};

int main()
{

    complex c1(2,3),c2(1,2),c3;
    c3=c1*c2;
    c3.show();
}

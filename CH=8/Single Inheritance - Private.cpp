#include<iostream>

using namespace std;

class A
{

    int a;
public:
    int b;
    void putdata();
    int getdata1();
    int getdata2();

};

void A :: putdata()
{
    a=100;
    b=200;
}
int A :: getdata1()
{
    return a;
}

int A :: getdata2()
{
    return b;
}


class B : private A
{
    int c;
public:
    void mul();
    void display();
};

void B :: mul()
{
    putdata();
    c=b*getdata1();
}

void B :: display()
{
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"a="<<getdata1()<<endl;
}
int main()
{
    B r;
   // r.putdata();
    r.mul();
    r.display();

    return 0;
}


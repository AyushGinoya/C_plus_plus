#include<iostream>

using namespace std;

class deep;

class ayush
{
    int a;
public:
    void getvalue(int m)
    {
        a=m;
    }
    void display1()
    {
        cout<<"a="<<a<<endl;
    }
    friend void swap(ayush &,deep &);
};

class deep
{
    int b;
public:
    void getvalue2(int m)
    {
        b=m;
    }
    void display()
    {
        cout<<"b="<<b<<endl;
    }
    friend void swap(ayush &, deep &);
};

void swap(ayush &r, deep &s)
{
    int temp=r.a;
    r.a=s.b;
    s.b=temp;
}

int main()
{
    ayush j;
    j.getvalue(2);
    deep k;
    k.getvalue2(4);
    cout<<"before swap:"<<endl;
    j.display1();
    k.display();

    swap(j,k);
    cout<<"after swap : "<<endl;
     j.display1();
    k.display();
    return 0;
}

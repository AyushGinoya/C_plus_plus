#include<iostream>

using namespace std;

class M
{
   protected:
       int m;
   public:
    void get_m(int);
};

void M :: get_m(int x)
{
    m=x;
}

class N
{
     protected:
       int n;
   public:
    void get_n(int);
};


void N :: get_n(int x)
{
    n=x;
}

class P : public M, public N
{
public:
    void display();
};

void P :: display()
{
    cout<<"m="<<m<<endl;
    cout<<"n="<<n<<endl;
    cout<<"m*n="<<m*n;
}

int main()
{

    P p;
    p.get_m(10);
    p.get_n(30);
    p.display();
}

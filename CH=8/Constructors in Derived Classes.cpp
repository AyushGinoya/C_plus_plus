#include<iostream>

using namespace std;


class alpha
{
    int a;
    public:
        alpha(int i)
        {
            a=i;
              cout<<"call alpha class"<<endl;
        }
        void show_1()
        {
            cout<<"A="<<a<<endl;
        }
};

class beta
{
    int b;
    public:
        beta(int i)
        {
            b=i;
            cout<<"call beta class"<<endl;
        }
        void show_2()
        {
            cout<<"B="<<b<<endl;
        }
};

class gamma: public beta, public alpha
 {
    int c,s;
public:
    gamma(int p,int q,int x,int y) : alpha(p),beta(q)
    {
        c=x;
        s=y;
        cout<<"call gamma Class "<<endl;
    }
    void show_3()
    {
        cout<<"C="<<c<<endl;
        cout<<"D="<<s<<endl;
    }
 };

int main()
{
    gamma g(1,2,3,4);
     g.show_1();
     g.show_2();
     g.show_3();

        return 0;
}

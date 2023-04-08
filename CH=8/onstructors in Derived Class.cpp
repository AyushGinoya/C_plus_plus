#include<iostream>

using namespace std;

class aayu
{
    int a;
    public:
        void getdata1();
        aayu(int);
};

aayu :: aayu(int p)
{
    a=p;
    cout<<"in aayu "<<endl;
}

void aayu :: getdata1()
{
    cout<<"a="<<a<<endl;
}
class riyu
{
    int b;
    public:
        void getdata2();
        riyu(int q);
};
riyu :: riyu(int q)
{
    b=q;
    cout<<"in riyu "<<endl;
}
void riyu :: getdata2()
{
    cout<<"b="<<b<<endl;
}

class father : public riyu, public aayu
{
    int m;
    int n;
public:
    father(int j,int k,int f,int g) : riyu(f),aayu(j)
    {
        m=k;
        n=g;
        cout<<"in father"<<endl;
    }
    void display();
};

void father :: display()
{
    cout<<"m="<<m<<endl;
    cout<<"n="<<n<<endl;
}

int main()
{
    father v(10,20,30,40);
    cout<<endl;
    v.getdata1();
    v.getdata2();
    v.display();
    return 0;
}

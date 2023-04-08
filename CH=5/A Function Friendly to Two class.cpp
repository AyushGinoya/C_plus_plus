#include<iostream>

using namespace std;

class xyz;

class abc
{
    int p;
public:
    void setvalue(int a)
    {
        p=a;
    }
    friend void max(abc,xyz);
};

class xyz
{
    int q;
public:
    void setvalue(int b)
    {
        q=b;
    }
    friend void max(abc,xyz);
};

void max (abc r,xyz s)
{
    if(r.p>=s.q)
    {
        cout<<r.p;
    }
    else
    {
        cout<<s.q;
    }
}
int main()
{

    abc g;
    g.setvalue(2);
    xyz k;
    k.setvalue(4);
    max(g,k);
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

class Dist
{
    int a,b,c,d;
public:
    Dist(int,int,int,int);

    friend void fun(int,int,int,int);

};
Dist :: Dist(int x,int y,int z,int w)
 {
        a=x;
        b=y;
        c=z;
        d=w;
}

void fun(int x,int y,int z,int w)
{
    float d;
    d=sqrt((x-y)*(x-y)+(z-w)*(z-w));
    cout<<d;
}

int main()
{
    int p,q,r,s;
    cout<<"Enter two Point value :";
    cin>>p>>q>>r>>s;
    Dist a(p,q,r,s);

    fun(p,q,r,s);
    return 0;
}

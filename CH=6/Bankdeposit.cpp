#include<iostream>

using namespace std;

class bank
{

    int y;
    int p;
    int r;
    int rp;
public:

    bank(){}
    bank(int ,int,int);
    bank(int,int,float);
    void display();

};

bank::bank(int a,int b,float c)
{

    y = a;
    p = b;
    r = c;
    rp=p;

    for(int i=0;i<y;i++)
    {
        rp=rp*(1+r);
    }
}
bank::bank(int a,int b,int c)
{

    y = a;
    p = b;
    r = c;
    rp=p;

    for(int i=0;i<y;i++)
    {
        rp=rp*(1+r);
    }
}
void bank :: display()
{

    cout<<rp<<endl;
}



int main()
{

    int a,b,d;
    float c;
    cout<<"Enter value of a,b,c,d"<<endl;
    cin>>a>>b>>c;
    bank b1,b2(a,b,c);

    cin>>a>>b>>c;
    bank b3(a,b,c);

    b2.display();
    b3.display();

    return 0;
}

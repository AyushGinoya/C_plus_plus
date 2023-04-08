#include<iostream>

using namespace std;

class Distance
{
    int meter;
    int centimeter;

public:

    Distance()
    {
        meter=0;
         centimeter=0;
    }
Distance (int c,int d)

{
    meter=c;
    centimeter=d;
}

    Distance(Distance &c,Distance &d);
    void display();
};


Distance :: Distance (Distance &a,Distance &b)
{


    centimeter=a.centimeter+b.centimeter;

    if(centimeter>100)
    {
        meter=centimeter/100;
        centimeter=centimeter%100;
    }
    meter=a.meter+b.meter+meter;
}
void Distance :: display()
{
    cout<<meter<<" meter and "<<centimeter<<" centimeter";
}

int main()
{
    int g,h;
    cout<<"Enter first Distance : "<<endl;
    cin>>g>>h;
    Distance a(g,h);

    cout<<"Enter second Distance : "<<endl;
    cin>>g>>h;
    Distance b(g,h);

    Distance f(a,b);
    f.display();
    return 0;
}

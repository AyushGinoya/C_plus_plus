#include<iostream>

using namespace std;

class area


    int a,b;
    float c;

public:

    area(int x,int y)
    {
        a=x;
        b=y;
    }
    area (int x,float z)
    {
        a=x;
        c=z;
    }
    area()
    {

    }
     void display(int ,int ,float);
};

void area::display(int x,int y,float z)
{
         cout<<"Area of Triangle : "<<(0.5*(x*y))<<endl;
         cout<<"Area of Rectangle : "<<x*z<<endl;
         cout<<"Area of Circle : "<<(3.14*z*z);
}
int main()
{
    int x,y;
    float z;

    area c;
    cout<<" Enter value of base and hight of Triangle : "<<endl;
    cin>>x>>y;
    area(x,y);
    cout<<" Enter value of side of rectangle : "<<endl;
    cin>>x>>z;
    area(x,z);
    cout<<"Enter value of circle red. : "<<endl;
    cin>>z;
    area();

    c.display(x,y,z);
}

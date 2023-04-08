#include<iostream>
#include<cmath>
using namespace std;

template<class T>
void roots(T a,T b,T c)
{
    T d=b*b-4*a*c;
    if(d==0)
    {
        float R1= -b/(2*a);
        cout<<" r1 = r2="<<R1<<endl;
    }else if(d>0)
    {
        float p=sqrt(d);
        float R2=(-b+p)/(2*a);
        float R3=(-b-p)/(2*a);
        cout<<"r1="<<R2<<endl;
        cout<<"r2="<<R3<<endl;
    }else
    {
        float R4=(-b/(2*a));
        float R5=sqrt(-d)/(2*a);
        cout<<"real part="<<R4<<endl;
        cout<<"imaginary part="<<R5<<endl;
    }
}

int main()
{
 cout << "Integer coefficients \n";
 roots(1,-5,6);
 cout << "\nFloat coefficients \n";
 roots(1.5,3.6,5.0);
 return 0;
}

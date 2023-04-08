#include<iostream>
using namespace std;

void fun(double a,double b)
{
    try
    {
        if(b==0)
            throw b;
        else
            cout<<a/b<<endl;
    }
    catch(double c)
    {
        cout<<"caught ex. and inside function"<<endl;
        throw;
    }
}
int main()
{
    try{
    fun(2.2,1.0);
    fun(1.1,0.0);
    }
    catch (double g)
    {
        cout<<"Inside main"<<endl;
    }
}

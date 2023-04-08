#include<iostream>

using namespace std;

void fun(int a,int b,int c)
{
    cout<<"Inside the function :"<<endl;

        if(a-b != 0)
        {
          int p=c/(a-b);
            cout<<"Result p="<<p<<endl;
        }
        else
        {
            throw(a-b);
        }
}
int main()
{
    try
    {
    cout<<"we r in try block:"<<endl;
   // fun();
    fun(10,20,30);
   // fun();
    fun(10,10,20);

    }

    catch(int i)
    {
        cout<<"In catch block:"<<endl;
        cout << "Caught the exception "<<endl;
    }
    return 0;
}

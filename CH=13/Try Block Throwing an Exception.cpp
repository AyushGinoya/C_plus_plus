#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"Enter the number :"<<endl;
    cin>>a>>b>>d;
    c=a-b;
    try
    {
        if(c!=0)
        {
            cout<<"result(d/c)="<<d/c<<endl;
        }
        else
        {
            throw(c);
        }
    }
    catch(int p)
    {
        cout<<"Exception caught: DIVIDE BY ZERO"<<endl;
    }
    cout<<"The End";
    return 0;
}

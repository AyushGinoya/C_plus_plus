/*
#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter value of a=";
    cin>>a;

    cout<<"Enter value of b=";
    cin>>b;

    c=a+b;
    b=c-b;
    a=c-b;

    cout<<"value of a=";
    cout<<a<<"\n";
    cout<<"value of b=";
    cout<<b;
    return 0;
}
*/

#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter value of a=";
    cin>>a;

    cout<<"Enter value of b=";
    cin>>b;

    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"value of a=";
    cout<<a<<"\n";
    cout<<"value of b=";
    cout<<b;
    return 0;
}

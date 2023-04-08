/*
Write a template function Swap() which will swap two values of different types of variables.
Write a main() to verify working of Swap() for integer and character data types.
*/

#include<iostream>
using namespace std;

template<class T,class P>
void swap(T x,P y)
{
    T temp=x;
    x=y;
    y=temp;
}
int main()
{
    int m=30,n=34;
    char a='c',b='d';
    cout<<"Before swap:"<<endl;
    cout<<"m="<<m<<endl<<"n="<<n<<endl;
    swap(m,n);
    cout<<endl;
    cout<<"After swap:"<<endl;
    cout<<"m="<<m<<endl<<"n="<<n<<endl;
    cout<<endl<<endl;

    cout<<"Before swap:"<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    swap(a,b);
    cout<<endl;
    cout<<"After swap:"<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;

    return 0;
}

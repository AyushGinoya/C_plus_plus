/*
 Define an appropriate class for following main( ). Also write how many times constructor
and copy constructor is called.
int main( )
{
Code A(100);
Code B(A);
Code C=A;
Code D;
D=A;
cout<<A.Display( )<<endl;
cout<<B.Display( )<<endl;
cout<<C.Display( )<<endl;
cout<<D.Display( )<<endl;
*/
#include<iostream>

using namespace std;
class Code
{
    int a;
public:
    Code(){}
    Code(int b)
    {
        a=b;
    }
    Code(code & x)
    {
        a=x.a;
    }
    void Display()
    {
        cout<<a<<endl;
    }
};

int main( )
{
Code A(100);
Code B(A);
Code C=A;
Code D;
D=A;
cout<<A.Display( )<<endl;
cout<<B.Display( )<<endl;
cout<<C.Display( )<<endl;
cout<<D.Display( )<<endl;

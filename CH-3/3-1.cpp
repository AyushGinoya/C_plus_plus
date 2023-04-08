#include<iostream>
#include<cstring>

using namespace std;


void fun(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{

  int a=10;
  int &b=a;

  int c=1;
  int &d=c;


    fun(a,c);

    cout<<a<<endl<<c<<endl;
    return 0;
}



#include<iostream>
using namespace std;

void test(int a)
{
    try{
    if(a==1)
        throw a;
    else if(a==-1)
        throw 'a';
    else if(a==0)
        throw 1.0;
        cout<<"end the block"<<endl;
    }
        catch(...)
        {
            cout<<"caught exception"<<endl;
        }

}

int main()
{
        test(1);
        test(2);
        test(0);
        test(-1);
}

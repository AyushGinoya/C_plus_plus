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
        catch(int p)
    {
        cout<<"INT"<<endl;
    }
    catch(char c)
    {
        cout<<"c"<<endl;
    }
    catch(double y)
    {
        cout<<"d"<<endl;
    }
}

int main()
{
        test(1);
        test(2);
        test(0);
        test(-1);
}

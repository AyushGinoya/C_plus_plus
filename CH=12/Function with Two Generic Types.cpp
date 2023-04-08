#include<iostream>
#include<cstring>

using namespace std;

template<class T1,class T2>
void Display(T1 X,T2 Y)
{
    cout<<X<<" and "<<Y<<endl;
}
int main()
{

    Display(123,"IT");
    Display(1.2,100);
    Display('R',"Ayush");
    return 0;
}

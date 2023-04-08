#include<iostream>

using namespace std;

template<class T>
void fun(T a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                T temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}


int main()
{
    int x[5]={2,3,4,1,5};
    float y[5]={2.2,3.3,1.1,4.4,5.5};
    fun(x,5);
    for(int k=0;k<5;k++)
{
    cout<<x[k]<<endl;
}
cout<<endl<<endl;
    fun(y,5);
    for(int k=0;k<5;k++)
{
    cout<<y[k]<<endl;
}
cout<<endl<<endl;
}

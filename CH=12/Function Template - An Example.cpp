#include<iostream>

using namespace std;

template<class T>
void swap(T &p, T &q)
{
    T temp=p;
    p=q;
    q=temp;
}
void fun(int m,int n,float a,float b)
{
    cout << "m and n before swap: " << m << " " << n << "\n";
    swap(m,n);
    cout << "m and n after swap: " << m << " " << n << "\n";

    cout << "a and b before swap: " << a << " " << b << "\n";
    swap(a,b);
    cout << "a and b after swap: " << a << " " << b << "\n";
}
int main()
{
    fun(3,2,3.33,2.22);
     return 0;
}

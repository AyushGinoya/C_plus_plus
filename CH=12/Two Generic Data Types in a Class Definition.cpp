#include<iostream>

using namespace std;

template <class T1,class T2>

class aayu
{
    T1 a;
    T2 b;
public:
    aayu()
    {
        a=0;b=0;
    }
    aayu(T1 c,T2 d)
    {
        a=c;
        b=d;
    }
    void showdata()
    {
        cout << a << " and " << b << "\n";
    }
};

int main()
{

    aayu<int,float> a1(321,123.45);
    aayu<float,int> a2(123.45,321);

    a1.showdata();
    a2.showdata();
}

#include<iostream>

using namespace std;

class complex
{
    int a;
    int b;
public:
    complex(){}
    complex(int m,int n)
    {
        a=m;
        b=n;
    }
    void display();
    complex operator+(complex);
};

complex  complex ::  operator + (complex c)
{
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
}

void complex :: display()
{
    cout << a<< " + j" << b<< "\n";
}

int main()
{
    complex c1,c2,c3;
    c1=complex(2,3);
    c2=complex(4,5);
    c3=c1+c2;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = "; c3.display();
}

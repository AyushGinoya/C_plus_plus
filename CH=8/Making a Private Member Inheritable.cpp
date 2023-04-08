#include<iostream>

using namespace std;

class a
{
private:
    int q=2;
public:
    int p=1;
       int ag();
protected:
    int r=3;
};
int a :: ag()
{
    return q;
}
class b : a
{

public:
     int z=5;
    void display();

    int pro();
    int pub();
};

int b :: pub()
{
    return p;
}

int b :: pro()
{
    return r;
}
void b :: display()
{
    cout<<"p="<<pub()<<endl;
    cout<<"q="<<ag()<<endl;
    cout<<"r="<<pro()<<endl;
    cout<<"z="<<z<<endl;
}

int main()
{
    b c;
    c.display();
    return 0;
}


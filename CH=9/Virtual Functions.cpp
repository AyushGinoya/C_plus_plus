#include<iostream>

using namespace std;

class B
{
    public:
    void display()
    {
        cout<<"base class function"<<endl;
    }
    virtual void show()
    {
        cout<<"virtual Function in base class"<<endl;
    }
};

class D : public B
{
     void display()
    {
        cout<<"derived class function"<<endl;
    }
    void show()
    {
        cout<<"in derived class"<<endl;
    }
};

int main()
{
    B b,*p;
    D d;
    p=&b;
    p->display();
    p->show();
    p=&d;
    p->display();
    p->show();
    return 0;
}

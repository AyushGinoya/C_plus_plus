#include<iostream>
#include<cstring>
using namespace std;

class B
{
	public:
		int a;
		void show()
		{
			cout<<"a="<<a<<endl;
		}
};

class D : public B
{
    public:
		int b;
		void show()
		{
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}
};

int main()
{
	B *p;
	B b;
	p=&b;
	p->a=100;
	p->show();
	D d;
	p=&d;
	p->a=200;
	p->show();
	D *h;
	h=&d;
	h->b=300;
	h->show();
	((D*)p)->b=400;
	((D*)p)->show();
	return 0;
}

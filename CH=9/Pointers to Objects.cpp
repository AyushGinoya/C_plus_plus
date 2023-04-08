#include<iostream>

using namespace std;

class item
{
    int code;
    int price;
public:
    void getdata(int a,int b)
    {
        code=a;
        price=b;
    }
    void shoedata()
    {
        cout<<"code="<<code<<endl;
        cout<<"price="<<price<<endl;
    }
};
const int size=2;
int main()
{
    item *p=new item[size];
    int x,y,i;
    item *d=p;
    for(i=0;i<size;i++)
    {
        cout<<"Enter value: "<<endl;
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"item:"<<i+1<<endl;
        d->shoedata();
        d++;
    }
}

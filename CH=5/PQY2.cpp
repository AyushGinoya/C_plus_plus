/*Define a class called Customer. It contains Customer name, Address, Item interested, total
items. Define the appropriate constructor and member functions. Write an object oriented
program which will calculate the total amount paid by the customer. Assume one customer can
purchased one item at a time.*/


#include<iostream>
#include<cstring>

using namespace std;

class Customer
{
    string name;
    string address;
    int total_item;
    int item_interested;
    int tpaid;
public:
    Customer(){}
    Customer(int,int);
    void getdata(string,string);
    void display();
};

void Customer :: getdata(string s3,string s2)
{
    name=s3;
    address=s2;

}
Customer ::  Customer(int c,int a)
{
   item_interested =c;
    total_item=a;
}

void Customer :: display()
{
    tpaid=300*total_item;
    cout<<"total paid by customer ==> "<<tpaid<<endl;
}

int main()
{
    Customer s(2,4);
    Customer p;
    p.getdata("apple","Location");
    p.display();

    return 0;
}

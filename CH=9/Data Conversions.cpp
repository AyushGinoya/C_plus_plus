#include<iostream>

using namespace std;

class invent2;
class invent1
{
    int code;
    int price;
    int item;
public:
    invent1(int a,int b,int c)
    {
        code=a;
        price=b;
        item=c;
    }
    void putdata()
 {
 cout << "Code: " << code << "\n";
 cout << "Items: " << item << "\n";
 cout << "Value: " << price << "\n";
 }
 int getcode()
 {
     return code;
 }
 int getprice()
 {
     return price;
 }
 int getitem()
 {
     return item;
 }
 operator int()
 {
     return(item*price);
 }
};
class invent2
{
    int code;
    int value;
public:
    invent2()
{
 code = 0; value = 0;
 }
 invent2(int x,int y)
 {
 code = x;
 value = y;
 }
 void putdata()
 {
 cout << "Code: " << code << "\n";
 cout << "Value: " << value << "\n\n";
 }
 invent2(invent1 p)
 {
     code=p.getcode();
     value=p.getitem()*p.getprice();
 }
};

int main()
 {
 invent1 s1(100,5,140);
 invent2 d1;
 int total;
 total=s1;
 d1=s1;
 cout << "Product details - invent1 type" << "\n";
 s1.putdata();
 cout << "\nStock value" << "\n";
 cout << "Value = " << total<< "\n\n";
 cout << "Product details-invent2 type" << "\n";
 d1.putdata();
 return 0;
 }

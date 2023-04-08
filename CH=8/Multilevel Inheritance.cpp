#include<iostream>

using namespace std;

class student
{

protected:
    int roll;
public:
    void putdata();
    void getdata();
};
void student :: putdata()
{
    int a;
    cout<<"Enter roll number : ";
    cin>>a;
    roll=a;
}
void student :: getdata()
{
    cout<<"Roll Number = "<<roll<<endl;
}

class test : public student
{
protected:
    int sub1;
    int sub2;
public:
    void mark();
    void display1();
};

void test :: mark()
{
    cout<<"Enter mark of two subject : ";
    cin>>sub1>>sub2;
}

void test :: display1()
{
    cout<<endl<<endl<<endl<<"Subject 1 Mark = "<<sub1<<endl;
    cout<<"Subject 2 Mark = "<<sub2<<endl;
}

class result : public test
{
    int total;
public:
    void display2();
};

void result :: display2()
{

    total=sub1+sub2;
    cout<<"Total mark = "<<total<<endl;

}

int main()
{

    result p;
    p.putdata();
    p.mark();
    p.display1();
    p.display2();
}

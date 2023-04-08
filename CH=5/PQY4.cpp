/*
 Write a program to write details of 50 students in file and read the details of all
students from the file and display on terminal. Use your own class definition for
student class.
*/


#include<iostream>

using namespace std;

class student
{
    int roll_no;
    int total_sub;
    int total_mark;
    string name;
    int cpi;
public:
    void display();
    void getdata();
};


void student :: getdata()
{
    cout<<"enter data :";
    cin>>roll_no;
    cin>>total_mark;
    cin>>total_sub;
    cin>>name;
    cin>>cpi;
}

void student :: display()
{
    cout<<endl<<endl<<roll_no<<endl;
    cout<<total_mark<<endl;
    cout<<total_sub<<endl;
    cout<<name<<endl;
    cout<<cpi<<endl;
}

int main()
{
    student s[50];
    for(int i=0;i<50;i++)
    {
         s[i].getdata();
    }
       for(int i=0;i<50;i++)
    {
         s[i].display();
    }
   return 0;
}

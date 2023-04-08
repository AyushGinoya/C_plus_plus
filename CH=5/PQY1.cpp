/*Define a class called Person. It has data members like name of person, date of birth, age and
address. It has one member function called GetDetails( ) to read the information of person and
another member function called PrintDetails( ) which will print all information. Write a class
definition and appropriate main ( ).*/


#include<iostream>
#include<cstring>

using namespace std;
class person
{
    string name;
    int d,m,y;
    int age;
    string address;
public:
     void GetDetails();
     void PrientDetails();
};

void person ::  GetDetails()
{
    cout<<"Enter name :";
     getline(cin,name);
     cout<<"Enter d,m,y :";
     cin>>d>>m>>y;
     cout<<"Enter age :";
     cin>>age;
     cout<<"Enter address :";
     cin>>address;
}

void person ::   PrientDetails()
{
    cout<<endl<<"Person name ==> "<<name<<endl;
    cout<<"Person Date of Birth ==> "<<d<<"/"<<m<<"/"<<y<<endl;
    cout<<"Person age ==> "<<age<<" "<<"year"<<endl;
    cout<<"Person address ==> "<<address<<endl;
}

int main()
{
    person p;
    p.GetDetails();
    p. PrientDetails();
    return 0;
}



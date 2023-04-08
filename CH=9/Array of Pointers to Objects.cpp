#include<iostream>
#include<cstring>

using namespace std;

class city
{
    char *name;
    int len;
public:
    city()
    {
        len=0;
        name=new char[len+1];
    }
    void set_name()
    {
        char *s;
        s=new char[30];
        cout<<"Enter city name:"<<endl;
        cin>>s;
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    void show_name()
    {
        cout<<"name="<<name<<endl;
    }
};

int main ()
{
    city *cp[10];
    int n=0,option,i;
    do
    {
        cp[n]=new city;
        cp[n]->set_name();
        n++;
        cout << "Do you want to enter one more name?\n";
        cout << "(Enter 1 for yes 0 for no):";
        cin>>option;
    }
    while(option);
        cout<<endl<<endl;
        for(i=0;i<10;i++)
    {
            cp[i]->show_name();
    }
    return 0;
}

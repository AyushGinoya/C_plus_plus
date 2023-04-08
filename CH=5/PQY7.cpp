/*
 Define a class called Country. Where country name, area and population of country are the
data members. It contains three member functions to read the information of country, print
the data related to country and search the country name which has highest population
respectively. Write an appropriate class definition and main function to check the behavior of
the class.
*/



#include<iostream>

using namespace std;

class Country
{
    string name[20];
    long area[20];
    long population[20];
public:
    void readdata();
    void printdata();
    void most_population();
};

void Country :: readdata()
{
    cout<<"Enter data :";
    for(int i=0;i<5;i++)
    {
        cin>>name[i];
        cin>>area[i];
        cin>>population[i];
    }
}

void Country :: printdata()
{
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<name[i];
        cout<<endl;
        cout<<area[i];
        cout<<endl;
        cout<<population[i];
        cout<<endl<<endl;
    }
}
void Country ::most_population()
{
    long max;
    population[0]=max;

    for(int i=0;i<5;i++)
    {
        int max=population[0];
        if(population[0]>max)
        {
            max=population[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(max==population[i])
        {
            cout<<name;
        }
    }
}

int main()
{
    Country c;
    c.readdata();
    c.printdata();
    c.most_population();
}

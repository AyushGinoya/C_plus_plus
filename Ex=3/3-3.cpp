#include<iostream>

using namespace std;

class time
{
    int hour;
    int minit;

public:

    void gettime();
    void puttime();
    void sum(time,time);

};

void time::gettime()
{
    cout<<"Enter time : ";
    cin>>hour;
    cin>>minit;
}

void time::puttime()
{
    cout<<hour<<"hour"<<"  ";
    cout<<minit<<" minit "<<"  "<<endl;
}
void time::sum(time t1,time t2)
{
    minit=t1.minit+t2.minit;
    hour=minit/60;
    minit=minit%60;
    hour=hour+t1.hour+t2.hour;
}
int main()
{
    time t1,t2,t3;

    t1.gettime();
    t2.gettime();
    t1.puttime();
    t2.puttime();
    t3.sum(t1,t2);

     //cout<<"t1 : ";

     //cout<<"t2 : ";

    // cout<<"t3 : ";
     t3.puttime();

    return 0;
}

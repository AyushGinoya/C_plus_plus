#include<iostream>

using namespace std;

int main()
{
    int item[4]={10,8,12,15};
    int cost[4]={75,100,60,99};
    int value;

    cout.width(5);
    cout<<  "Items";

    cout.width(8);
    cout<<"Cost";

    cout.width(15);
    cout<<"total Value"<<endl;

    for(int i=0;i<4;i++ ){
         cout.width(5);
         cout<<item[i];


         cout.width(8);
         cout<<cost[i];

         value=item[i]*cost[i];
         cout.width(15);
         cout<<value<<endl;
    }

    return 0;
}

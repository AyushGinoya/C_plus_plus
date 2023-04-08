#include<iostream>

using namespace std;

int main()
{
    int i,j;

    for(i=0;i<5;i++){
        for(j=4;j>i;j--){
            cout<<" ";
        }for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<"\n";
    }


    return 0;
}

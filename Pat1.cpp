#include<iostream>

using namespace std;

int main()
{
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }for(int k=5-1;k>i;k--){
            cout<<" ";
        }
        cout<<"\n";
    }


    return 0;
}

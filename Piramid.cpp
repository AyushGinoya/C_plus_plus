#include<iostream>

using namespace std;

int main()
{
    int i,j,k,n=9;

    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            cout << " ";
        }for(k=0;k<i;k++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

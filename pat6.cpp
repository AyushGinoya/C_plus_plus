/*      1
       1 0
      1 0 1
     1 0 1 0
    1 0 1 0 1

*/

#include<iostream>

using namespace std;
int main()
{
        int i,j,n=5;
    for(i=0;i<n;i++){
        for(j=4;j>=i;j--){
            cout<<" ";
        }for(int k=0;k<=i;k++){
            if(k%2!=0){
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}

/*

#include<iostream>

using namespace std;
int main()
{
        int i,j,n=5;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
                cout<<" ";
            if(j%2==0){
                cout<<"1";
            }else if(j%2!=0){
                cout<<"0";
            }
        }
        cout<<endl;
    }

    return 0;
}

*/



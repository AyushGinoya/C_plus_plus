/*
        1       E   i=0     j=0
       0 1      O   i=1     j=1
      1 0 1     E   i=2     j=2
     0 1 0 1    O   i=3     j=3
    1 0 1 0 1   E   i=4     j=4
*/

#include<iostream>

using namespace std;

int main()
{
    int counter = 1;
    int n;
    cout << "Enter n : ";
     cin >> n;

    for(int i=0; i<n ;i++){
     for(int j=0; j<counter; j++){
        if(i%2 == 0 && j%2 == 0){
            cout << 1  << " ";
        }
        else if(i%2 == 0 && j%2 != 0){
            cout << 0 << " ";
        }
        else if(i%2 != 0 && j%2 == 0){
            cout << 0 << " ";
        }
        else{
            cout << 1 << " ";
        }
     }
     cout << endl;
     counter++;
    }

    return 0;
}

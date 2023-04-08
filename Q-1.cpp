/*
You are given an array A=[A1,A2,…,AN] of length N.

You can right rotate it any number of times (possibly, zero).
What is the maximum value of A1+AN you can get?

Note: Right rotating the array [A1,A2,…,AN] once gives the array [AN,A1, A2,.....,AN−1]. For example, right rotating [1,2,3]
once gives [3,1,2], and right rotating it again gives [2,3,1].

3
2
5 8
3
5 10 15
4
4 4 4 4

Test case 1: Whether you right rotate the array or not, you will always end up with A1+AN=13.

Test case 2: It is optimal to right rotate the array once after which the array becomes [15,5,10] with A1+AN=25.

Test case 3: No matter how much you right rotate the array, you will always obtain A1+AN=8.
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n,sum=0,s=0,i,m=0;
        cin>>n;
        int a[n];

        for( i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==2)
        {
            cout<<a[0]+a[1]<<endl;
        }
        if(n>2)
        {
            sum=a[0]+a[n-1];
            for(i=0;i<n-1;i++)
            {
                s=a[i]+a[i+1];
                if(m<s)
                m=s;
            }
            if(sum>=m)
            {
                cout<<sum<<endl;
            }
            else
            {
                cout<<m<<endl;}
        }
    }
    return 0;
}

/*
Chef has an array A of length N.

In one operation, Chef can choose any two distinct indices i,j (1≤i,j≤N,i≠j) and either change Ai to Aj or change Aj to Ai.

Find the minimum number of operations required to make all the elements of the array equal.

4
3
1 2 3
4
5 5 5 5
4
2 2 1 1
3
1 1 2

2
0
2
1

Test Case 1: You can make all the elements equal in 2 operations. In the first operation, you can choose indices 1,2 and convert A1 to A2.
 So the array becomes [2,2,3]. Now you can choose indices 1,3 and convert A3 to A1, so the final array becomes [2,2,2].

Test Case 2: Since all the elements are already equal there is no need to perform any operation.

Test Case 3: You can make all the elements equal in 2 operations. In the first operation, you can choose indices 1,3 and convert A1 to A3.
 So the array becomes [1,2,1,1]. Now you can choose indices 1,2 and convert A2 to A1, so the final array becomes [1,1,1,1].

Test Case 4: You can make all the elements equal in 1 operation. You can pick indices 2,3 and convert A3 to A2 after which the array becomes [1,1,1].
*/


#include<iostream>
using namespace std;

int main()
{

    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        int a[n];
        int b[1001];

        for(int i=0;i<1001;i++)
            b[i]=0;

        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a[i]=temp;
            b[i]=b[temp]+1;
        }

        int max=0;
        for(i=0;i<n;i++)
        {
            int j=a[i];
            if(b[j]>max)
            {
                max=b[j];
            }
        }
        cout<<n-max<<endl;
    }
}

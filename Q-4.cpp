/*
You are given N identical squares, each with side length A. All the squares have their sides parallel to the x−axis and y−axis.
That is, the squares are not tilted. You have to take several (possibly, zero or all) squares and rearrange them to obtain a mega square.
 The mega square can't have any gap in the enclosed region or have overlapping squares. Also, you cannot rotate any square.

Output the side length of the largest mega square that you can obtain.

5
3 2
5 3
16 18
11 8
8 6

Test case 1: You can choose just one square to form the mega square. So the side length will be 2.

Test case 2: You can choose 4 squares to form a mega square with side-length 2*A =6.
*/


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,a;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a;
	    int s=sqrt(n);
	    cout<<s*a<<endl;
	}
	return 0;
}


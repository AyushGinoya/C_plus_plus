/*
Stack likes the number 3 a lot.

He has two non-negative integers A and B.
In one operation, Stack can do either of the following:

A:=|A−B| (change A to |A−B|)
B:=|A−B| (change B to |A−B|)
Note that |X| denotes absolute value of X. For example |−7|=7 and |4|=4.

Find the minimum number of operations after which at least one integer out of A and B becomes divisible by 3.

2
0 343
1 1

Test case 1: A=0 is already divisible by 3.

Test case 2: In the only operation, Stack can change A=1 to A=|A−B|=|1−1|=0. Now A=0 is divisible by 3.
*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    int c=0;
	    cin>>a>>b;
	   while(a%3!=0 && b%3!=0)
	    {
	        if(a>=b)
	        a=abs(a-b);
	        else
	        b=abs(a-b);
	        c++;

	    }
	    cout<<c<<endl;

	}
	return 0;
}


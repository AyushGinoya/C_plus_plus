/*
Chef decided to buy a new tablet. His budget is BB, so he cannot buy a tablet whose price is greater than BB. Other than that
, he only has one criterion — the area of the tablet's screen should be as large as possible. Of course, the screen of a tablet is always a rectangle.

Chef has visited some tablet shops and listed all of his options. In total, there are NN available tablets, numbered 11 through NN.
 For each valid ii, the ii-th tablet has width W_iW
i , height H_iH
i
  and price P_iP
i
Help Chef choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.

nput
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains two space-separated integers NN and BB.
NN lines follow. For each ii (1 \le i \le N1≤i≤N), the ii-th of these lines contains three space-separated integers W_iW
i
​
 , H_iH
i
​
  and P_iP
i
3
3 6
3 4 4
5 5 7
5 2 5
2 6
3 6 8
5 4 9
1 10
5 5 10


12
no tablet
25

CODE-	TABLET
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	/*tb prise "B"
	  screen larg as possible as
	  tb available 1 to N
	  ith wi,hi,price price pi
	*/

	int t;
	cin>>t;
	while(t--)
	{
	    int n,b,q,maxi=0;
	    cin>>n>>b;
	    for(int i=0;i<n;i++)
	    {
	        int w,h,p;
	        cin>>w>>h>>p;
	        if(b>=p)
	        {
	            maxi=max(maxi,w*h);
	        }
	    }
	    if(maxi==0)
	    {
	        cout<<"no tablet"<<endl;
	    }
	    else
	    {
	        cout << maxi <<endl;
	    }


	}
	return 0;
}


/*
Chef has a stick of length N.

He can break the stick into 2 or more parts such that the parity of length of each part is same. For example, a stick of length
11 can be broken into three sticks of lengths {3,3,5} since each part is odd, but it cannot be broken into two sticks of lengths
{5,6} since one is even and the other is odd.
Chef can then continue applying this operation on the smaller sticks he obtains, as many times as he likes.
Can Chef obtain a stick of length exactly X by doing this?

3
6 1
3 2
4 3

Test case 1: Chef can initially break the stick into 3 parts of length 2 each. After that, Chef can pick any segment of
 length 2 and break it into 2 sticks of length 1 each.

Test case 2: Chef cannot obtain a stick of length 2, since the only way to break a stick of length 3 following the given
 conditions is into three parts of length 1 each.

Test case 3: Chef can break the stick into lengths 3 and 1.
*/
#include <iostream>
using namespace std;

int main()
{
    int test_case,n,a;
    cin>>test_case;
    for(int i=0;i<test_case;i++)
    {
        cin>>n>>a;
        if(n%2==0)
        {
            cout<<"Yes"<<endl;
        }else if(n%2==1)
        {
            if(a%2==0)
            {
                cout<<"No"<<endl;
            }else if(a%2==1)
            {
                cout<<"Yes"<<endl;
            }
        }
    }

    return 0;
}

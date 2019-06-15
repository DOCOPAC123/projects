/*
	Given a number n, find whether that number is a power of 2?	
*/
/*
	Rohit Chauhan
	IIT Mandi (C.S.E.)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        // xlog2 = logN ; xtemp1 = temp2
        if(n==0)
        {
            cout << "NO\n";
        }
        else
        {
            long long int temp1 = n;
            long long int temp2 = n-1;
            int ans = temp1 & temp2;
            if(ans == 0)
            {
                cout << "YES\n";
            }
            else
            {
               cout << "NO\n";
            }
        }
        
    }
}


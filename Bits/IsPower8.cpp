/*
    Check whether the given number is a power of 2
*/

/*
    Rohit Chauhan
    IIT Mandi,Himachal, CSE
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
        // For power of 8, 2 conditions
        // 1: The end of (number) & (number-1) should be zero
        // 2: The distance to reach the first set bit from right to left, should be modulo of 3;
        if(n==0)
        {
            cout << "No\n";
        }
        else
        {
            if((n & (n-1)) == 0)
            {
                long long int counter = 0;
                while(n!=0)
                {
                    int bit = n&1;
                    if(bit == 1)
                    {
                        break;
                    }
                    else
                    {
                        counter = counter + 1;
                    }
                    n = n >> 1;
                }
                if(counter % 3 == 0 && counter!=0)
                {
                    cout << "Yes\n";
                }
                else
                {
                    cout << "No\n";
                }
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}


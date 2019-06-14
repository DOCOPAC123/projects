// A number is sparse, if consecutive 2 bits are set
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = 1;
        while(n!=0)
        {
            int temp1 = n & 1;
            n = n >> 1;
            int temp2 = n & 1;
            if(temp1 == 1 && temp2 == 1)
            {
                ans = 0;
                break;
            }
        }
        cout << ans << "\n";
    }
}


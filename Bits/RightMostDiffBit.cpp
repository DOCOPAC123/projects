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
        int m;
        cin >> m;
        int ans=0;
        if(n==m)
        {
            cout << "-1\n";
        }
        else
        {
            int counter = 0;
            while(n!=0 && m!=0)
            {
                counter = counter + 1;
                int temp1 = n & 1;
                int temp2 = m & 1;
                if(temp1 != temp2)
                {
                    break;
                }
                n = n >> 1;
                m = m >> 1;
            }
            while(n!=0 && m == 0)
            {
                int temp = n & 1;
                counter = counter + 1;
                if(temp == 1)
                {
                    break;
                }
                n = n >> 1;
            }
            while(m!=0 && n == 0)
            {
                int temp = m & 1;
                counter = counter + 1;
                if(temp == 1)
                {
                    break;
                }
                m = m >> 1;
            }
            ans = counter;
            cout << ans << "\n";
        }
    }
}


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
        string ans="";
        while(n!=0)
        {
            int temp = n & 1;
            if(temp == 0)
            {
                ans = ans + '0';
            }
            else
            {
                ans = ans + '1';
            }
            n = n >> 1;
        }
        for(int i=ans.length();i<14;i++)
        {
            ans = ans + '0';
        }
        reverse(ans.begin(),ans.end());
        cout << ans << "\n";
    }
}



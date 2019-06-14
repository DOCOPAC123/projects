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
        int k;
        cin >> k;
        int counter=0;
        int ans = 0;
        while(n)
        {
            int temp = n & 1;
            if(counter == k)
            {
                if(temp == 1)
                {
                    ans = 1;
                    break;
                }
            }
            counter = counter + 1;
            n = n >> 1;
        }
        if(ans == 0)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}


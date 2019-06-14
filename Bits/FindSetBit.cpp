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
        int pos = 0;
        while(n!=0)
        {
            int bit = n & 1;
            pos = pos + 1;
            if(bit == 1)
            {
                break;
            }
            n = n >> 1;
        }
        cout << pos << "\n";
    }
}


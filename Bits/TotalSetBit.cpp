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
        int count = 0;
        for(int i=1;i<=n;i++)
        {
            int temp = i;
            while(temp!=0)
            {
                int bit = temp & 1;
                if(bit == 1)
                {
                    count = count + 1;
                }
                temp = temp >> 1;
            }
        }
        cout << count << "\n";
    }
}


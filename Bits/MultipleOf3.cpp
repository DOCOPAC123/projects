#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int counter=0;
        int len = s.length();
        int odd = 0;
        int even = 0;
        for(int i=1;i<=len;i++){
            if(s[i-1]=='1')
            {
                if(i%2==1)
                {
                    odd = odd + 1;
                }
                else
                {
                    even = even + 1;
                }
            }
        }
	int diff = abs(even - odd);
	
        if(diff%3 == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
}

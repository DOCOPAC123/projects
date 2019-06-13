#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; // t is the number of testcases
    cin >> t;
    while(t--)
    {
        int n; // n is the number of packets
        cin >> n;
        vector<int> packets;
        int temp;
        for(int i=0;i<n;i++)
        {
            cin >> temp;
            packets.push_back(temp);
        }
        int m;
        cin >> m;
        sort(packets.begin(),packets.end());
        int i=0;
        int j = m-1;
        int mini=packets[j]-packets[i];
        while(j<n)
        {
            if(mini > (packets[j]-packets[i]))
            {
                mini = packets[j] - packets[i];
            }
            i = i + 1;
            j = j + 1;
        }
        cout << mini << "\n";
    }
}

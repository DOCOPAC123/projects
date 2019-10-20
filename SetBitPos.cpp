//
//  SetBitPos.cpp
//  Trie_data_structure
//
//  Created by Rohit1 Chauhan on 20/10/19.
//  Copyright © 2019 Rohit1 Chauhan. All rights reserved.
//

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
        int count=0;
        int ans;
        int totalSet=0;
        while(n>0)
        {
            int bit = n&1;
            count = count + 1;
            if(bit==1)
            {
                totalSet=totalSet+1;
                if(totalSet==1)
                ans = count;
                else
                    break;
            }
            n = n>>1;
            
        }
        if(totalSet==1)
        {
            cout << ans<< "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}

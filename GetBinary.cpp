//
//  GetBinary.cpp
//  Trie_data_structure
//
//  Created by Rohit1 Chauhan on 20/10/19.
//  Copyright © 2019 Rohit1 Chauhan. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> getBinary(int n)
{
    vector<int> ans;
    for(int i=0;i<14;i++)
    {
        ans.push_back(0);
    }
    int count = 13;
    while(n>0)
    {
        int bit = n&1;
        ans[count] = bit;
        count = count - 1;
        n = n >> 1;
    }
    return ans;
}

void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n;
    cin>> n;
    vector<int> ans;
    ans = getBinary(n);
    print(ans);
}

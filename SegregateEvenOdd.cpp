//
//  SegregateEvenOdd.cpp
//  Trie_data_structure
//
//  Created by Rohit1 Chauhan on 18/10/19.
//  Copyright © 2019 Rohit1 Chauhan. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    int n = v.size();
    for(int i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int i = 0;
    int j = n-1;
    while(j>=i)
    {
        if(v[i]%2==0)
        {
            i = i + 1;
        }
        if(v[j]%2==1)
        {
            j = j - 1;
        }
        if(v[i]%2==1 && v[j]%2 == 0 && j>=i)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i = i + 1;
            j = j - 1;
        }
    }
    print(v);
}

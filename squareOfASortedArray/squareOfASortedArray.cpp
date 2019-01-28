
//  main.cpp
//  Coding
//
//  Created by Rohit Chauhan on 28/01/19.
//  Copyright © 2019 Rohit Chauhan. All rights reserved.
//
// Approach : using the 2 Pointer Concept to get the time complxity in order n as the array is actually sorted.
#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int n;
    cin >> n;
    int temp;
    vector<int> v;
    int i,j=-1;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        v.push_back(temp);
        if(temp>=0 && j==-1)
        {
            j = i;
        }
    }
    vector<int> ans;
    n = v.size()-1;
    // if all elements are negative
    if(j==-1)
    {
        for(int i=n-1;i>=0;i--)
        {
            ans.push_back(v[i]*v[i]);
            return ans;
        }
    }
    
    // if all elements are positive
    if(j==0)
    {
        for(;j<v.size();j++)
        {
            v[j] = v[j]*v[j];
        }
        return v;
    }
    else
    // if both types of elements are Present
    {
        i = j-1;
        while(i>=0 && j<n)
        {
            int first = v[i]*v[i];
            int second = v[j]*v[j];
            if(first > second)
            {
                ans.push_back(second);
                j = j+1;
            }
            else
            {
                ans.push_back(first);
                i = i-1;
            }
        }
        
        while(i>=0)
        {
            int first = v[i]*v[i];
            ans.push_back(first);
            i = i-1;
        }
        while(j<n)
        {
            int second = v[j]*v[j];
            ans.push_back(second);
            j = j+1;
        }
        return ans;
    }
    
    
}


//
//  PossiblePathsMatrix.cpp
//  Trie_data_structure
//
//  Created by Rohit1 Chauhan on 21/10/19.
//  Copyright © 2019 Rohit1 Chauhan. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int totalPaths;

void path(int rows, int cols, int i, int j){
    if(i >= rows || j >= cols){
        return;
    }
    if(i == rows-1 && j == cols-1){
        totalPaths = totalPaths + 1;
        return;
    }
    else{
        path(rows,cols,i+1,j);
        path(rows,cols,i,j+1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        totalPaths = 0;
        int rows;
        cin >> rows;
        int cols;
        cin >> cols;
        path(rows,cols,0,0);
        cout << totalPaths;
        cout << "\n";
    }
}

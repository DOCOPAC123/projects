class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int n = A.size();
        if(n==0)
        {
            return A;
        }
        int m = A[0].size();
        
        vector<vector<int>> ans;
        for(int i=0;i<m;i++)
        {
            vector<int> temp;
            for(int j = 0; j<n;j++)
            {
                temp.push_back(0);
            }
            ans.push_back(temp);
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               ans[i][j] = A[j][i];
            }
        }
        return ans;
    }
};

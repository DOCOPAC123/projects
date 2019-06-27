class Solution {
    
   int increasing(vector<int> A)
    {
       int ans=1;
        for(int i=1;i<A.size();i++)
        {
            if(A[i]<A[i-1])
            {
                ans=0;
                break;
            }
        }
       return ans;
    }
    
    int decreasing(vector<int> A)
    {
        int ans=1;
        for(int i=1;i<A.size();i++)
        {
            if(A[i]>A[i-1])
            {
                ans=0;
                break;
            }
        }
        return ans;
    }
public:
    bool isMonotonic(vector<int>& A) {
        int ans = increasing(A) || decreasing(A);
        return ans;
    }
};

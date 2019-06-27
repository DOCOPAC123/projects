class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
           int sumA=0;
        int sumB=0;
        for(int i=0;i<A.size();i++)
        {
            sumA = sumA + A[i];
        }
        for(int i=0;i<B.size();i++)
        {
            sumB = sumB + B[i];
        }
        vector<int> ans;
        if(sumA == sumB)
        {
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
        else
        {
            for(int i=0;i<A.size();i++)
            {
                for(int j=0;j<B.size();j++)
                {
                    if((sumA-A[i]+B[j])==(sumB-B[j]+A[i]))
                    {
                        ans.push_back(A[i]);
                        ans.push_back(B[j]);
                        break;
                    }
                }
                if(ans.size()!=0)
                {
                    break;
                }
            }
            return ans;
        }
    }
};

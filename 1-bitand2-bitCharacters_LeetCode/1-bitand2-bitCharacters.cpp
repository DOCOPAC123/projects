class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        if(n==0)
        {
            return true;
        }
        if(n==1)
        {
            if(bits[0]==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            int ans=0;
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                {
                    if(bits[i]==0)
                    {
                        ans=1;
                    }
                    break;
                }
                else
                if((bits[i]==1 && bits[i+1]==1) || (bits[i]==1 && bits[i+1]==0))
                {
                    i = i + 1;
                }
            }
            return ans;
        }
    }
};

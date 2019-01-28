class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int n = nums.size();
        int m = nums[0].size();
        if(r*c!=n*m)
        {
            return nums;
        }
        else
        {
            vector<vector<int>> v;
            int row=0;
            int col=0;
            int count=0;
            int flag=0;
            for(int i=0;i<r;i++)
            {
                vector<int> temp;
                for(int j=0;j<c;j++)
                {
                    if(col==m)
                    {
                        col=0;
                        row = row+1;
                    }
                    temp.push_back(nums[row][col]);
                    col = col + 1;
                    count = count+1;
                    if(count==r*c)
                    {
                        flag=1;
                        break;
                    }
                }
                v.push_back(temp);
                if(flag==1)
                {
                    break;
                }
            }
            return v;
        }
    }
};

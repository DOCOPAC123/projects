class Solution {
public:
    
    int find(vector<int>& numbers,int target, int selected)
    {
        int i=0;
        int j = numbers.size()-1;
        int ans=-1;
        while(j>=i)
        {
            int middle = (i+j)/2;
            if(numbers[middle]==target && selected!=middle)
            {
                ans = middle;
                break;
            }
            else
            {
                if(numbers[middle]<target)
                {
                    i = middle+1;
                    
                }
                else
                {
                    j = middle-1;
                }
            }
        }
        return ans;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans;
        for(int i=0;i<numbers.size();i++)
        {
            int first = numbers[i];
            int second = target-first;
            int isPresent = find(numbers,second,i);
            if(isPresent!=-1)
            {
                ans.push_back(i+1);
                ans.push_back(isPresent+1);
                break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
            
    }
};

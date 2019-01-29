class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp.insert(make_pair(nums[i],1));
            }
            else
            {
                mp[nums[i]] = mp[nums[i]] + 1;
            }
        }
        int maxi=-9999999;
        map<int,int> :: iterator it;
        for(it = mp.begin();it!=mp.end();it++)
        {
            if(it->second>maxi)
            {
                maxi = it->second;
            }
        }
        vector<int> candidate;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==maxi)
            {
                candidate.push_back(it->first);
            }
        }
         int width=9999999;
        // cout << candidate.size();
        for(int i=0;i<candidate.size();i++)
        {
            int start=-1;
            int end=-1;
            int count=0;
           int key = candidate[i];
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==key)
                {
                    count=count+1;
                }
                if(nums[j]==key && start==-1)
                {
                    start = j;
                    end = j;
                }
                else
                if(nums[j]==candidate[i] && count==maxi)
                {
                    end = j;
                    
                }
               
            }
            // cout << start << " :: "<< end<< "\n";
            if((end-start+1)<width)
            {
                width = end-start+1;
            }
        }
        return width;
    }
};

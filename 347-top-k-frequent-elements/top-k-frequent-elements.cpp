class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int,int>mpp;
        int n=nums.size();
        vector<vector<int>> count(n+1);
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

        for(auto it:mpp)
        {
            count[it.second].push_back(it.first);
        }

        vector<int> ans;
        for(int i=n;i>=0;i--)
        {
            if(ans.size() == k)
                    break;
            for(int j=0;j<count[i].size();j++)
            {
                if(ans.size() == k)
                    break;

                ans.push_back(count[i][j]);
            }
        }

        return ans;
    }
};
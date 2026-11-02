class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,vector<int>> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]].push_back(i);
        }

        for(int i=0;i<nums.size();i++)
        {
            int rem = target-nums[i];
            if(rem == nums[i])
            {
                if(mpp[nums[i]].size() > 1)
                    return mpp[nums[i]];
                else
                    continue;
            }
            if(mpp.find(rem) != mpp.end())
            {
                return { mpp[rem][0],mpp[nums[i]][0] };
            }
        }
        return {-1,-1};
    }
};
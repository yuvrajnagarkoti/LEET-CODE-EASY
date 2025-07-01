class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map <int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int temp = target-nums[i];
            if(mpp.find(temp)  != mpp.end())
            {
                ans.push_back(i);
                ans.push_back(mpp[temp]); 
                return ans;
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};
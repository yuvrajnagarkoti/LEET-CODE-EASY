class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int i;
        vector<int> ans;
        ans.push_back(nums[0]);
        for(i=0;i<nums.size();i++)
        {
            if( nums[i] != ans.back())
            {
                ans.push_back( nums[i] );
            }
        }

        for(i=0;i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        return ans.size();
    }
};
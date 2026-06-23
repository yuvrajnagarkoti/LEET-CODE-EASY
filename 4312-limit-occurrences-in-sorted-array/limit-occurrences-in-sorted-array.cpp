class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k)
    {
        vector<int> ans;
        int count=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count == k && nums[i] == ans[c-1])
            {
                continue;
            }
            if(ans.size() > 0 && nums[i] != ans[c-1])
                count=0;
            
            ans.push_back(nums[i]);
            count++;
            c++;
        }
        return ans;
    }
};
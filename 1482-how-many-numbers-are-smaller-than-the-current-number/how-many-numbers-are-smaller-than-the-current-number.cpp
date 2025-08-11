class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> count(102,0);
        for(auto num : nums)
        {
            count[num]++;
        }
        for(int i=1;i<102;i++)
        {
            count[i] = count[i]+count[i-1];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                ans.push_back(0);
            else
                ans.push_back(count[nums[i]-1]);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> findValidElements(vector<int>& nums)
    {
        vector<int> right(nums.begin(),nums.end());
        int n=nums.size(),m=0;
        for(int i=n-1;i>=0;i--)
        {
            right[i] = m;
            m=max(m,nums[i]);
        }
        m=0;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i] > m || nums[i] > right[i])
                ans.push_back(nums[i]);
            m=max(m,nums[i]);
        }
        return ans;
    }
};
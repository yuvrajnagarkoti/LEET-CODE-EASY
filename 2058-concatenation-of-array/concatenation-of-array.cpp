class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        int i,n=nums.size();
        vector<int> ans(n*2);
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        return ans;
    }
};
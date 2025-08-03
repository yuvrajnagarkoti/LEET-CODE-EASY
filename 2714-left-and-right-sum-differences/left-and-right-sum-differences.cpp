class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums)
    {
        int i,n=nums.size();
        vector<int> ans(n,0);
        int lsum=0,rsum=0;
        for(i=0;i<n;i++)
            rsum=rsum+nums[i];   
        for(i=0;i<n;i++)
        {
            rsum= rsum - nums[i];
            ans[i] = abs( rsum-lsum );
            lsum = lsum + nums[i];
        }
        return ans;
    }
};
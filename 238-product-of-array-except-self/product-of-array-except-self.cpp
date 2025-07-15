class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int i,n = nums.size();
        vector<int> pre(n,1);
        vector<int> suf(n,1);
        vector<int> ans(n);
        for(i=1;i<n;i++)
        {
            pre[i] = nums[i-1]*pre[i-1];
        }
        for(i=n-2;i>=0;i--)
        {
            suf[i] = nums[i+1]*suf[i+1];
        }
        for(i=1;i<n-1;i++)
        {
            ans[i] = pre[i]*suf[i];
        }
        ans[0] = suf[0];
        ans[n-1] = pre[n-1];
        return ans;
    }
};

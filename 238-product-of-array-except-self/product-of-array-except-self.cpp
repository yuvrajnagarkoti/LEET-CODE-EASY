class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int i,n = nums.size();
        int pre=1,suf=1;
        vector<int> ans(n,1);
        for(i=1;i<n;i++)
        {
            pre=pre*nums[i-1];
            ans[i] = pre;
        }
        
        for ( i=n-2; i>=0 ; i--)
        {
            suf = suf * nums[i + 1];
            ans[i] = ans[i] * suf;
        }
        return ans;
    }
};

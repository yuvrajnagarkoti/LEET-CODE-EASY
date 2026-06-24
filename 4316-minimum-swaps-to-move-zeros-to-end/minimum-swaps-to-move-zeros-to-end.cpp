class Solution {
public:
    int minimumSwaps(vector<int>& nums)
    {
        int zeros=0,n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                zeros++;
        }
        for(int i=n-1;i>n-zeros-1;i--)
        {
            if(nums[i]==0)
                ans++;
        }
        return zeros-ans;
    }
};
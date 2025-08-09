class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        int n=nums.size();
        int count=0;
        vector<int> presum(n,0);
        presum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            presum[i]=presum[i-1]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(presum[i] == k)
                count++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(presum[i]-presum[j] == k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
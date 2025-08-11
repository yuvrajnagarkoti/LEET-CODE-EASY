class Solution {
public:
    int subarraySum(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> prefixsum(n);
        prefixsum[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            prefixsum[i] = prefixsum[i-1] + nums[i];
        }
        
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            int start = max(0, i - nums[i]);
            if (start == 0)
            {
                total += prefixsum[i];
            }
            else
            {
                total += prefixsum[i] - prefixsum[start-1];
            }
        }
        return total;
    }
};
class Solution
{
public:
    int maxFrequency(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end());
        int left = 0, ans = 0;
        long prefixSum = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            prefixSum += nums[right];      
            // The sum required to make all elements in range [left, right] equal to nums[right]
            while ((long)(right - left + 1) * nums[right] - prefixSum > k)
            {
                prefixSum -= nums[left++];
            }      
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};

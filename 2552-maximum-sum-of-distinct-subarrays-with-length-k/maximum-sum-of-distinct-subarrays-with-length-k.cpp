class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> freq;
        long long sum = 0, ans = 0;
        int left = 0;

        for (int right = 0; right < n; ++right) {
            freq[nums[right]]++;
            sum += nums[right];

            // If duplicate, shrink from left until unique
            while (freq[nums[right]] > 1) {
                freq[nums[left]]--;
                sum -= nums[left];
                left++;
            }

            // Check for valid window of size k
            if (right - left + 1 == k) {
                ans = max(ans, sum);
                // shrink from left to slide window
                freq[nums[left]]--;
                sum -= nums[left];
                left++;
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int, int> count;
        int n = nums.size();
        int majorityThreshold = n / 2;
        int maxElement = nums[0], maxCount = 0;

        // Count occurrences of each element
        for (int num : nums)
        {
            count[num]++;
            // If an element appears more than n/2 times, return it immediately
            if (count[num] > majorityThreshold) {
                return num;
            }
        }
        return maxElement; // This will always be reached since majority element always exists
    }
};
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int max1 = 0, max2 = 0;
        for (int num : nums)
        {
            if (num == 1)
            {
                max1++;
            }
            else
            {
                max2 = max(max2, max1);
                max1 = 0;  // Reset count
            }
        }
        return max(max2, max1);  // Final check for last sequence
    }
};
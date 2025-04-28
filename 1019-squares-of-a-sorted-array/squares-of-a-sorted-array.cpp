class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int l = 0, h = nums.size() - 1;
        vector<int> v(nums.size()); // Preallocate size
        int k = nums.size() - 1;     // Start filling from the end
        while (l <= h)
        {
            if (abs(nums[l]) > abs(nums[h]))
            {
                v[k--] = nums[l] * nums[l];
                l++;
            }
            else
            {
                v[k--] = nums[h] * nums[h];
                h--;
            }
        }
        return v;
    }
};
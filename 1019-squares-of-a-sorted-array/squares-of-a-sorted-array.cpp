class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> ans;
        int n = nums.size();
        int high = n;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= 0)
            {
                high = i;
                break;
            }
        }
        int low = high - 1;
        for (int i = 0; i < n; i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        while (low >= 0 && high < n)
        {
            if (nums[low] <= nums[high])
            {
                ans.push_back(nums[low--]);
            }
            else
            {
                ans.push_back(nums[high++]);
            }
        }
        while (low >= 0)
        {
            ans.push_back(nums[low--]);
        }
        while (high < n)
        {
            ans.push_back(nums[high++]);
        }
        return ans;
    }
};

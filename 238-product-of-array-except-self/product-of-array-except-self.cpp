class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();
        int zeroCount = 0;
        long long product = 1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                zeroCount++;
            else
                product *= nums[i];

            if (zeroCount > 1)
                break; // No need to continue
        }
        vector<int> result(n, 0); // Initialize result with 0s
        if (zeroCount > 1)
        {
            return result; // All zero if more than one zero
        }
        else if (zeroCount == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                    result[i] = product;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                result[i] = product / nums[i];
            }
        }
        return result;
    }
};

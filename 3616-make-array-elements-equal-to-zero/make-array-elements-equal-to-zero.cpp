class Solution
{
public:
    int countValidSelections(vector<int>& nums)
    {
        int ans = 0;
        int n = nums.size();

        // Try each zero position as a starting point
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0) continue;

            // Try both directions: +1 (right), -1 (left)
            for (int dir : {1, -1})
            {
                vector<int> temp(nums);
                int j = i;
                int step = dir;

                // Simulate movement
                while (j >= 0 && j < n)
                {
                    if (temp[j] > 0)
                    {
                        temp[j]--;
                        step = -step; // flip direction
                    }
                    j += step;
                }

                // Check if all elements are zero
                if (all_of(temp.begin(), temp.end(), [](int x){ return x == 0; }))
                    ans++;
            }
        }
        return ans;
    }
};

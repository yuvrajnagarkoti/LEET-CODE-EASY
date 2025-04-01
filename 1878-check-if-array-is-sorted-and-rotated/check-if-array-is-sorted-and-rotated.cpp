using namespace std;
class Solution
{
public:
    bool check(vector<int>& nums)
    {
        int count = 0, n = nums.size();
        // Count how many times the order breaks
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
        }
        // The array can be sorted and rotated if count <= 1
        return count <= 1;
    }
};
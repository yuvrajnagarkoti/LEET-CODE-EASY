class Solution
{
public:
    int findNumbers(vector<int>& nums)
    {
        int count = 0;
        for (int num : nums)
        {
            // Handle 0 separately because log10(0) is undefined
            int digits = (num == 0) ? 1 : (int)log10(num) + 1;

            if (digits % 2 == 0)
                count++;
        }
        return count;
    }
};

class Solution
{
public:
    bool threeConsecutiveOdds(const std::vector<int>& arr)
    {
        int count = 0;
        for (int num : arr)
        {
            if (num % 2 == 0)
            {
                count = 0;
                continue;
            }
            if (++count == 3)
            {
                return true;
            }
        }
        return false;
    }
};
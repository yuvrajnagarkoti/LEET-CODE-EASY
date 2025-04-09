class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int maxHours)
    {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int optimalSpeed = right;
        while (left <= right)
        {
            int midSpeed = (left + right) / 2;
            long long requiredHours = 0;
            for (int bananas : piles)
            {
                requiredHours += (bananas + midSpeed - 1) / midSpeed; // ceiling division
            }
            if (requiredHours <= maxHours)
            {
                optimalSpeed = midSpeed;
                right = midSpeed - 1;
            }
            else
            {
                left = midSpeed + 1;
            }
        }
        return optimalSpeed;
    }
};

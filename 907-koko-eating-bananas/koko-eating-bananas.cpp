class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h)
    {
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        long long key = high;

        while (low <= high)
        {
            long long k = low + (high - low) / 2;
            long long temp = 0;

            for (int i = 0; i < piles.size(); i++)
            {
                temp += (piles[i] + k - 1) / k;  // cleaner ceiling division
            }

            if (temp <= h)
            {
                key = k;
                high = k - 1;
            }
            else
            {
                low = k + 1;
            }
        }

        return (int)key;
    }
};

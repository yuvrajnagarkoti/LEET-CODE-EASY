class Solution
{
public:
    int countValidSelections(vector<int>& nums)
    {
        int ans = 0;
        
        // Case 1: start moving right
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                vector<int> num(nums.begin(), nums.end());
                int j = i;
                int counter = 1;

                while (j >= 0 && j < num.size())
                {
                    if (num[j] > 0)
                    {
                        num[j]--;
                        counter = -counter; // toggle direction
                    }
                    j += counter;
                }

                bool allZero = true;
                for (int k = 0; k < num.size(); k++)
                {
                    if (num[k] != 0)
                    {
                        allZero = false;
                        break;
                    }
                }
                if (allZero) ans++;
            }
        }

        // Case 2: start moving left
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                vector<int> num(nums.begin(), nums.end());
                int j = i;
                int counter = -1;

                while (j >= 0 && j < num.size())
                {
                    if (num[j] > 0)
                    {
                        num[j]--;
                        counter = -counter; // toggle direction
                    }
                    j += counter;
                }

                bool allZero = true;
                for (int k = 0; k < num.size(); k++)
                {
                    if (num[k] != 0)
                    {
                        allZero = false;
                        break;
                    }
                }
                if (allZero) ans++;
            }
        }
        return ans;
    }
};
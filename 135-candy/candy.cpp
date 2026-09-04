class Solution {
public:
    int candy(vector<int>& ratings)
    {
        int n = ratings.size();
        int count = 0;
        vector<int> temp(n, 1);

        // Left to Right
        for(int i = 1; i < n; i++)
        {
            if(ratings[i] > ratings[i-1])
            {
                temp[i] = temp[i-1] + 1;
            }
        }

        // Right to Left
        for(int i = n-2; i >= 0; i--)
        {
            if(ratings[i] > ratings[i+1])
            {
                temp[i] = max(temp[i], temp[i+1] + 1);
            }
        }

        for(int i = 0; i < n; i++)
        {
            count += temp[i];
        }

        return count;
    }
};
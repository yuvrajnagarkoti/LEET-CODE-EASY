class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim)
    {
        long long maxDiagSq = 0;
        int bestArea = 0;

        for (auto &rect : dim)
        {
           long long d = (long long)rect[0] * rect[0] + (long long)rect[1] * rect[1];
            int a = rect[0] * rect[1];
            if (d > maxDiagSq)
            {
                maxDiagSq = d;
                bestArea = a;
            }
            else if (d == maxDiagSq && a > bestArea)
                bestArea = a;
        }
        return bestArea;
    }
};

class Solution {
public:
    int dp[46];

    int climb(int level, int n)
    {
        if(level > n) return 0;
        if(level == n) return 1;

        if(dp[level] != -1)
            return dp[level];

        dp[level] = climb(level + 1, n) + climb(level + 2, n);
        return dp[level];
    }

    int climbStairs(int n)
    {
        for(int i = 0; i < 46; i++)
            dp[i] = -1;

        return climb(0, n);
    }
};
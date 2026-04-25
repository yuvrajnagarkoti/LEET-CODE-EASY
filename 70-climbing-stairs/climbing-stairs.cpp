class Solution {
public:

    int rec(int i,int n,vector<int> &dp)
    {
        if(i>n)
            return 0;
        
        if(i==n)
            return 1;

        if( dp[i] != -1)
            return dp[i];
        
        return dp[i] = rec(i+1,n,dp) + rec(i+2,n,dp);
    }

    int climbStairs(int n)
    {
        vector<int> dp(n,-1);
        rec(0,n,dp);

        return dp[0];
    }
};
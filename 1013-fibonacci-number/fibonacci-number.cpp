class Solution
{
    
    vector<int> dp = vector<int> (31,-1);
    public:
    int rec(int i)
    {
        if( dp[i] != -1)
            return dp[i];
        
        return dp[i] = rec(i-1)+rec(i-2);
    }

    int fib(int n)
    {
        fill(dp.begin(), dp.end(), -1);
        dp[0]=0;
        dp[1]=1;
        return rec(n);
    }
};
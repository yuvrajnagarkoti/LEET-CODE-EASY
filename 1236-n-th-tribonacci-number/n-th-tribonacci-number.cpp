class Solution {
public:

    vector<int> dp = vector<int> (38,-1);

    int rec(int i)
    {
        if(dp[i] != -1)
            return dp[i];
        
        return dp[i]= rec(i-1)+rec(i-2)+rec(i-3);
    }

    int tribonacci(int n)
    {
        fill(dp.begin(),dp.end(),-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;

        if( n < 3)
            return dp[n];
        
        return rec(n);
    }
};
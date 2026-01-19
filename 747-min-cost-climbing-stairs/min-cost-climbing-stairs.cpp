class Solution {
public:

    vector<int> dp = vector<int>(1001,0);
    int rec(int i,int c,vector<int> cost)
    {
        if(i >= cost.size())
            return c;

        if(dp[i] != -1)
            return dp[i];
        
        return dp[i] = cost[i]+min(rec(i+1,c,cost) , rec(i+2,c,cost));
    }
    int minCostClimbingStairs(vector<int>& cost)
    {
        fill(dp.begin(),dp.end(),-1);
        int c0 = rec(0,0,cost);
        int c1 = rec(1,0,cost);
        return min(c0,c1);
    }
};
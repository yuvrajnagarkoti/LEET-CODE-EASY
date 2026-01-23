class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n=prices.size();
        vector<int> dp(n,0);
        int mini = prices[0];
        for(int i=1;i<n;i++)
        {
            dp[i] = mini;
            if(prices[i] < mini)
            {
                mini=prices[i];
            }
        }
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]-dp[i] > ans)
            {
                ans=prices[i]-dp[i];
            }
        }
        return ans;
    }
};
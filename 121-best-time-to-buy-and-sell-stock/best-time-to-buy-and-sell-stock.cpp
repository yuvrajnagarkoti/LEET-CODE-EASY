class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int s=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            profit=max(profit,prices[i]-s);
            s=min(s,prices[i]);
        }
        return profit;
    }
};
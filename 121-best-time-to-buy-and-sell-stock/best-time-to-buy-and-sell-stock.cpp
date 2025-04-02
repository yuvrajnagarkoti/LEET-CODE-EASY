class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int minimum=prices[0];
        int maxprofit = 0;
        int n = prices.size();
        for(int i=1;i<n;i++)
        {
            maxprofit = max(maxprofit,prices[i]-minimum);
            minimum=min(minimum,prices[i]);
        }
        return maxprofit;
    }
};

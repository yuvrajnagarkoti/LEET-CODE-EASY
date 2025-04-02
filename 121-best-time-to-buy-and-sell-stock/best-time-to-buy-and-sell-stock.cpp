class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int minimum=prices[0];
        int maxprofit = 0;
        for(int i=1;i<prices.size();i++)
        {
            maxprofit = max(maxprofit,prices[i]-minimum);
            minimum=min(minimum,prices[i]);
        }
        return maxprofit;
    }
};

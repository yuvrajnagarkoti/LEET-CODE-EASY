class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int i,n=prices.size();
        int maxprofit=0;
        int min_e=prices[0];
        for(i=1;i<n;i++)
        {
            if( prices[i]-min_e > maxprofit)
                maxprofit = prices[i]-min_e;
            
            if( prices[i] < min_e)
                min_e=prices[i];
        }
        return maxprofit;
    }
};
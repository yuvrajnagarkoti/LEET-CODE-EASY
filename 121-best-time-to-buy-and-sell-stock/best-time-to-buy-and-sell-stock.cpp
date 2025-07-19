class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int i,n=prices.size();
        int maxprofit=0;
        vector<int> arr(n,0);
        int mine=prices[0];
        for(i=1;i<n;i++)
        {
            arr[i] = prices[i]-mine;
            if(prices[i] < mine)
                mine=prices[i];
        }
        mine=0;
        for(i=0;i<n;i++)
        {
            if(mine < arr[i])
                mine=arr[i];
        }
        return mine;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n=prices.size();
        vector<int> post(n,0);
        int temp=0;
        for(int i=n-1;i>=0;i--)
        {
            temp = max(temp,prices[i]);
            post[i] = temp;
        }
        temp = 0;
        for(int i=0;i<n;i++)
        {
            temp = max(temp,post[i]-prices[i]);
        }

        if(temp < 0)
            temp = 0;

        return temp;
    }
};
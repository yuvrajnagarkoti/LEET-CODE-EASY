class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices)
        {
            minPrice = min(minPrice, price);  // Update minimum price
            maxProfit = max(maxProfit, price - minPrice);  // Update max profit
        }
        return maxProfit;
    }
};

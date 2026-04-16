class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buyDay {};
        int sellDay {1};
        int profit {};

        while (sellDay < prices.size())
        {
            if (prices[buyDay] >= prices[sellDay])
            {
                buyDay = sellDay;
            }
            else
            {
                profit = max((prices[sellDay] - prices[buyDay]), profit);//conditional update profit
            }
            ++sellDay;
        }
        return profit;
    }
};

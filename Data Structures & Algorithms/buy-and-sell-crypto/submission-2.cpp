class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buyDay {0};
        int sellDay {1};
        int profit {0};

        while (sellDay < prices.size())
        {
            if (prices[buyDay] >= prices[sellDay])//current buyDay is pointing at a lower price than the current buyDay
            {
                buyDay = sellDay;
            }
            else//buyDay is higher
            {
                profit = max(prices[sellDay] - prices[buyDay], profit); //update profit ONLY if it's higer than the privious one
            }
            ++sellDay;
        }
        return profit;
    }
};

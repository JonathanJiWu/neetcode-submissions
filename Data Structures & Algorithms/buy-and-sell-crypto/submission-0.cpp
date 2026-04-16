class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buyDay {0};
        int sellDay {1};
        int profit {0};

        while (sellDay < prices.size())
        {
            int currentProfit {prices[sellDay] - prices[buyDay]};
            if (currentProfit > profit)
            {
                profit = currentProfit;
            }
            else if (prices[sellDay] < prices[buyDay])//currentProfit < profit => is this right? => it also need to be a lower buyDay
            {
                buyDay = sellDay;
            }
            // else
            // {
            //     ++sellDay;
            // }
            ++sellDay;
        }
        return profit;//would this profit be updated its value in the above while loop?


        
    }
};

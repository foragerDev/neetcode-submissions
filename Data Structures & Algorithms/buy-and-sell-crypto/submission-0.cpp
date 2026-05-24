class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        int bought = INT_MAX;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < bought) bought = prices[i];
            else profit = max(profit, prices[i] - bought);
        }

        return profit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        int bought = INT_MAX;

        for(auto& p: prices) {
            if(p < bought) bought = p;
            else profit = max(profit, p - bought);
        }

        return profit;
    }
};

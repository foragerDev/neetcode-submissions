class Solution {
   public:
    int minCostClimbingStairs(vector<int>& cost) { 
        std::vector<int> dp(cost.size(), -1);
        return min(recurse(cost, 0, dp), recurse(cost, 1, dp));
    }

    int recurse(vector<int>& cost, int index, std::vector<int>& dp) {
        if (index >= cost.size()) return 0;

        if(dp[index] != -1) return dp[index];
        dp[index] = min(cost[index] + recurse(cost, index + 1, dp), cost[index] + recurse(cost, index + 2, dp));

        return dp[index];
    }
};

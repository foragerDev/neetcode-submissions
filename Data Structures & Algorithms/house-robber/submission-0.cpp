class Solution {
   public:
    int rob(vector<int>& nums) { 
        std::vector<int> dp(nums.size(), -1);
        return rob(nums,dp, 0); }

    int rob(vector<int>& nums, std::vector<int>& dp, int i) {
        if (i >= nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        dp[i] = max(nums[i] + rob(nums, dp, i + 2), rob(nums, dp, i + 1));

        return dp[i];
    }
};

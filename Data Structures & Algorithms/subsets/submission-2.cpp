#include <print>

class Solution {
   public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> collection;
        std::vector<int> s{};
        backtracking(collection, s, nums, 0);

        return collection;
    }

    void backtracking(vector<vector<int>>& collection, vector<int>& selection, vector<int>& nums,
                      int index) {

        if (selection.size() <= nums.size()) {
            collection.push_back(selection);
        }

        for (int j = index; j < nums.size(); j++) {
            selection.push_back(nums[j]);
            backtracking(collection, selection, nums, j + 1);
            selection.pop_back();
        }
    }
};

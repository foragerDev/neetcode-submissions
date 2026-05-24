class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_to_index;

        for (int i = 0; i < nums.size(); i++) {
            num_to_index[nums[i]] = i + 1;
        }
        for (int i = 0; i < nums.size(); i++) {
            int target_index = num_to_index[target - nums[i]] - 1;

            std::cout <<  nums[i] << " " << target_index << std::endl;
            if (target_index > 0 && target_index > i) {
                return {i, target_index };
            }
        }
 
        return {-1, -1};
    }
};

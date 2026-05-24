class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() - 1;
        while(start < end) {
            int s = numbers[start] + numbers[end];
            if(s == target) return {start + 1, end + 1};
            if(s > target) end--;
            else start++;
        }

        return {-1, -1};
    }
};

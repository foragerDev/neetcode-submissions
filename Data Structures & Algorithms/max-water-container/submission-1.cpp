class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;

        int maxQuantity = 0;

        while (left < right) {
            int maxHeight = min(heights[left], heights[right]);
            maxQuantity = max(maxQuantity, maxHeight * (right - left));

            if (heights[left] < heights[right])
                left++;
            else
                right--;
        }

        return maxQuantity;
    }
};

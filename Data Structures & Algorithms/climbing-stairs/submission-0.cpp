class Solution {
public:
    int climbStairs(int n) {

        if (n < 3) return n;

        int first = 1;
        int second = 1;

        while(n > 0) {
            int temp = first;
            first = second;
            second = temp + second;
            
            n--;
        }

        return first;
    }
};

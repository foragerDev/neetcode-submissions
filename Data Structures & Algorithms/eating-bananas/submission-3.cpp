#include <print>
class Solution {
public:

    bool canEatAll(vector<int>& p, long long& rate, int& h) {

        int hours = 0;
        for(int i = 0; i < p.size(); i++) {
            if(p[i] < rate) hours++;
            else {
                hours += (p[i] / rate) + (p[i] % rate ? 1 : 0);
            }
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long start = 1;
        long long end = 1000000000;

        while(start <= end) {
            auto mid = (start + end) / 2;
            if(canEatAll(piles, mid, h)) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }


        return start;
    }
};

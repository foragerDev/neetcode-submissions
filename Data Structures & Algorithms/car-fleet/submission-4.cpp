class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<pair<int, int>> posSpeed_p(position.size());

        for(int i = 0; i < position.size(); i++) {
            posSpeed_p[i] = {position[i], speed[i]};
        }

        std::sort(posSpeed_p.rbegin(), posSpeed_p.rend());
        std::vector<double> stk;

        // int answer = 0;
        for(auto [p, s]: posSpeed_p) {

            double timeToEnd = static_cast<double>(target-p) / s;
            stk.push_back(timeToEnd);
            if(stk.size() >= 2 && stk.back() <= stk[stk.size() - 2]) {
                stk.pop_back();
            }

        }

        return stk.size();
    }
};

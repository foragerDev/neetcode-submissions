class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        std::vector<int> results(n, 0);

        std::stack<int> stk;
        for(int i = 0; i < n; i++) {
            int temp = temperatures[i];
            while(!stk.empty() && temp > temperatures[stk.top()]) {
                int t = stk.top();
                stk.pop();
                results[t] = i - t;
            }

            stk.push(i);
        }

        return results;
    }
};

class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stk;

        auto op = [](int a, int b, string& o) {
            if (o == "+") {
                return a + b;
            }
            if (o == "-") {
                return a - b;
            }
            if (o == "*") {
                return a * b;
            } else
                return a / b;
        };

        for (auto& t : tokens) {
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int r = stk.top();
                stk.pop();
                int l = stk.top();
                stk.pop();

                stk.push(op(l, r, t));
            }

            else {
                stk.push(stoi(t));
            }
        }

        return stk.top();
    }
};

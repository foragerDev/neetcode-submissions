class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> counter;

        for (auto& n : nums) {
            counter[n]++;
        }

        auto comp = [](auto& p1, auto& p2) { return p1.second > p2.second; };
        std::priority_queue<pair<int, int>, std::vector<pair<int, int>>, decltype(comp)> pq;

        for (auto& p : counter) {
            pq.push(p);
            if (pq.size() > k) {
                pq.pop();
            }
        }

        std::vector<int> answer;

        for (; !pq.empty(); pq.pop()) {
            answer.push_back(pq.top().first);
        }

        return answer;
    }
};

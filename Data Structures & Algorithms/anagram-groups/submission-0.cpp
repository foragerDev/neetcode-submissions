class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string>> groups;

        for(auto& s: strs) {
            auto string_copy = s;
            sort(s.begin(), s.end());
            groups[s].push_back(string_copy);
        }

        std::vector<vector<string>> flatten_answer;
        for(auto [k, v]: groups) {
            flatten_answer.push_back(v);
        }

        return flatten_answer;
    }
};

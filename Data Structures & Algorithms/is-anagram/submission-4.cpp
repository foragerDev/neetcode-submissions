class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() !=  t.size()) return false;

        std::vector<int> char_sum(26, 0);

        for(int i = 0; i < s.size(); i++) {
            char_sum[s[i] - 'a']++;
            char_sum[t[i] - 'a']--;
        }

        for(auto& i: char_sum) {
            if(i != 0) return false;
        }

        return true;
     }
};

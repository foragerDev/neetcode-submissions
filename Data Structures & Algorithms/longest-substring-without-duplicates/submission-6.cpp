class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() <= 1) return s.size();
        size_t max_size = 0;

        std::unordered_set<int> chars;

        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            char t = s[i];

            while(chars.contains(t) && j <= i) {
                chars.erase(s[j]);
                j++;
            }

            chars.insert(t);
            max_size = max(max_size, chars.size());

        }
        return max_size;
    }
};

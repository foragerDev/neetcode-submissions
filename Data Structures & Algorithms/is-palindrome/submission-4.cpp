class Solution {
   public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            char f = s[start];
            char e = s[end];
            if (f == ' ' || !isalnum(f))
                start++;
            else if (e == ' ' || !isalnum(e))
                end--;
            else if (tolower(f) != tolower(e)) {
                return false;
            }

            else {
                start++;
                end--;
            }
        }

        return true;
    }
};

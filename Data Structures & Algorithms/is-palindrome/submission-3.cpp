class Solution {
   public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while (start <= end) {
            char f = s[start];
            char e = s[end];
            if (f == ' ' || !isalnum(f))
                start++;
            else if (e == ' ' || !isalnum(e))
                end--;
            else if (tolower(s[start]) != tolower(s[end])) {
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

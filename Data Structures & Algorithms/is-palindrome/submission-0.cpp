class Solution {
   public:
    bool isPalindrome(string s) {
        int n = s.size();
        string updated = "";
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                updated += tolower(s[i]);
            }
        }
        int st = 0, end = updated.size() - 1;
        while (st<end) {
            if (updated[st] != updated[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};

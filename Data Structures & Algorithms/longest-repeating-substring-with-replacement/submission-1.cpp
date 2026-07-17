class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxcount = 0;

        for(char ch = 'A'; ch <= 'Z'; ch++) {

            for(int i = 0; i < n; i++) {

                int count = 0;
                int countk = 0;

                for(int j = i; j < n; j++) {

                    if(s[j] == ch) {
                        count++;
                    }
                    else if(countk < k) {
                        count++;
                        countk++;
                    }
                    else {
                        break;
                    }
                }

                maxcount = max(maxcount, count);
            }
        }

        return maxcount;
    }
};
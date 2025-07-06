class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            string word = "";
            vector<bool> seen(256, false);

            for (int j = i; j < n; j++) {
                if (seen[s[j]]) {
                    break;
                }
                word += s[j];
                seen[s[j]] = true;
            }

            if (word.length() > maxLen) {
                maxLen = word.length();
            }
        }
        return maxLen;
    }
};

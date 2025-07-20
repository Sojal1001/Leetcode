class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = "";
        int minLen = strs[0].length();

        // Find minimum length among all strings
        for (int i = 1; i < strs.size(); ++i) {
            if (strs[i].length() < minLen)
                minLen = strs[i].length();
        }

        // Compare characters one by one
        for (int i = 0; i < minLen; ++i) {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != ch) {
                    return prefix;
                }
            }
            prefix += ch;
        }

        return prefix;
    }
};

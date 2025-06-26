class Solution {
public:
    int lengthOfLastWord(string s) {
        string word = "", lastWord = "";
        for(int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                lastWord = word;
                word = "";
            }
        }
        if (!word.empty()) lastWord = word;
        return lastWord.length();
    }
};

class Solution {
public:
    unordered_map<string, bool> memo;

    bool isMatch(string s, string p) {
        string key = s + "|" + p;  // Unique key for memo

        if (memo.count(key)) return memo[key];

        if (p.empty()) return memo[key] = s.empty();

        bool first_match = (!s.empty() && (s[0] == p[0] || p[0] == '.'));

        if (p.length() >= 2 && p[1] == '*') {
            memo[key] = isMatch(s, p.substr(2)) || (first_match && isMatch(s.substr(1), p));
        } else {
            memo[key] = first_match && isMatch(s.substr(1), p.substr(1));
        }

        return memo[key];
    }
};

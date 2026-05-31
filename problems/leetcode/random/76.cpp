class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> letters;
        for (auto c : t) {
            letters[c]++;
        }
        int count = 0, l = 0, min_len = INT_MAX, min_start = 0;
        for (int r = 0; r < s.length(); r++) {
            if (letters[s[r]] > 0) {
                count++;
            }
            letters[s[r]]--;
            if (count == t.length()) {
                while (l < r && letters[s[l]] < 0) {
                    letters[s[l]]++;
                    l++;
                }
                if (min_len > (r-l + 1)) {
                    min_start = l;
                    min_len = r - l + 1;
                }
            }
        }
        if (min_len == INT_MAX) {
            return "";
        }
        return s.substr(min_start, min_len);
    }
};
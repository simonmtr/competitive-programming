class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> letters;
        int l = 0, max_val = 0, res = 0;

        for (int r = 0; r < s.size(); r++) {
            letters[s[r]] = 1 + letters[s[r]];
            max_val = max(max_val, letters[s[r]]);
            if ((r - l + 1) - max_val > k) {
                letters[s[l]] -= 1;
                l++;
            } else {
                res = max(res, (r - l + 1));
            }
        }
        return res;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ana;
        for (string s : strs) {
            int cs[26] = {0};
            for (char c : s) {
                cs[c - 'a']++;
            }
            string char_counters;
            for (int i = 0; i < 26; i++) {
                char_counters += string(cs[i], i + 'a');
            }
            ana[char_counters].push_back(s);
        }
        vector<vector<string>> res;
        for (auto a : ana) {
            res.push_back(a.second);
        }
        return res;
    }
};
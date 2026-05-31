class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, max_len = 0;
        unordered_set<char> chars;
        for (int i = 0; i < s.length(); i++) {
            while (chars.find(s[i]) != chars.end()) {
                chars.erase(s[left]);
                left++;
            }
            chars.insert(s[i]);
            max_len = max(max_len, i - left + 1);
        }
        return max_len;
    }    
};
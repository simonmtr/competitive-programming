class Solution {
public:
    bool isAnagram(string s, string t) {
        int c[26] = {0};
        for (char x : s) c[x - 'a']++;
        for (char x : t) c[x - 'a']--;
        for (int v : c) {
            if (v != 0) return false;
        }
        return true;
    }
};
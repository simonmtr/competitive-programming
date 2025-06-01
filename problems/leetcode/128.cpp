class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> all(nums.begin(), nums.end());
        int longest_sequence = 0;
        for (int n : all) {
            if (all.find(n - 1) == all.end()) {
                int cur_sequence = 1;
                while (all.find(n + cur_sequence) != all.end()) {
                    cur_sequence++;
                }
                longest_sequence = max(longest_sequence, cur_sequence);
            }
        }
        return longest_sequence;
    }
};
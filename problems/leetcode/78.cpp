class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> sub;
        vector<vector<int>> res;
        dfs(nums, 0, sub, res);
        return res;
    }
    void dfs(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& res) {
        res.push_back(sub);
        for (int j = i; j<nums.size(); j++) {
            sub.push_back(nums[j]);
            dfs(nums, j+1, sub, res);
            sub.pop_back();
        }
    }
};
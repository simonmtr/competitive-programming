class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res, "", 0, 0, n);
        return res;
    }

private:
    void backtrack(vector<string>& res, string current, int left, int right, int n) {
        if (current.size() == 2 * n) {
            res.push_back(current);
            return;
        }
        if (left < n) {
            backtrack(res, current + '(', left+1, right, n);
        }
        if (right < left) {
            backtrack(res, current + ')', left, right+1, n);
        }
    }
};
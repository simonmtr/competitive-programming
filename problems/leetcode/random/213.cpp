class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return nums[0];
        }
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i<n-1; ++i) {
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }
        int first_robbing = dp[n - 2];

        dp[0] = 0;
        dp[1] = nums[1];
        for(int i = 2; i<n; ++i) {
            dp[i] = max(nums[i]+dp[i-2], dp[i-1]);
        }
        return max(first_robbing, dp[n-1]);
    }
};
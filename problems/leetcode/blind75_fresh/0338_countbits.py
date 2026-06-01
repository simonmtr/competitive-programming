class Solution:
    def countBits(self, n: int) -> List[int]:
        dp = [0] * (n+1)
        highest_two_power = 1
        for i in range(1, n+1):
            if highest_two_power * 2 == i:
                highest_two_power = i
            dp[i] = 1 + dp[i-highest_two_power]
        return dp
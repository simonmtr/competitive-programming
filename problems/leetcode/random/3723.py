class Solution:
    def maxSumOfSquares(self, num: int, sum: int) -> str:
        if sum > 9 * num:
            return ""

        res = []

        for i in range(num):
            d = min(9, sum)
            sum -= d
            res.append(str(d))

        return "".join(res)

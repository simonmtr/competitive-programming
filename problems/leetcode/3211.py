class Solution:
    def validStrings(self, n: int) -> List[str]:
        res = []
        def backtrack(i, s):
            if (i == n):
                res.append(s)
                return
            if (s[-1] == "0"):
                backtrack(i+1, s + "1")
            elif (s[-1] == "1"):
                backtrack(i + 1, s + "0")
                backtrack(i + 1, s + "1")
        backtrack(1, "0")
        backtrack(1, "1")
        return res
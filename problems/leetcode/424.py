class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        l = 0
        frequencies = {}
        res = 0

        for r in range(len(s)):
            frequencies[s[r]] = 1 + frequencies.get(s[r], 0)
            cells = r - l + 1
            if cells - max(frequencies.values()) <= k:
                res = max(res, cells)
            else:
                frequencies[s[l]] -= 1
                l += 1
        return res
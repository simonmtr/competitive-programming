class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        temp_max = 0
        res = 0

        for i, curr in enumerate(arr):
            temp_max = max(temp_max, curr)
            if temp_max == i:
                res += 1
        return res
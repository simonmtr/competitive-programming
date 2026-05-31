class Solution:
    def hammingWeight(self, n: int) -> int:
        onecount = 0
        while n:
            if n & 1:
                onecount+=1
            n = n >> 1
        return onecount
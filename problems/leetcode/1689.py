class Solution:
    def minPartitions(self, n: str) -> int:
        cur_max = 0
        for i in n:
            cur_max = max(int(i), cur_max)
        return cur_max
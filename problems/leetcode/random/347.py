class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        res = []
        c  = Counter(nums)
        for i in range(k):
            most_cmn = c.most_common()[0]
            res.append(most_cmn[0])
            c[most_cmn[0]] = 0
        return res
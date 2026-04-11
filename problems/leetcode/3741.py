class Solution:
    def minimumDistance(self, nums: List[int]) -> int:
        if len(nums) < 3:
            return -1 
        lookup = defaultdict(list)
        for i, n in enumerate(nums):
            lookup[n].append(i)
        cur_min = -1
        for num, l in lookup.items():
            leng = len(l)
            if leng < 3:
                continue
            for it in range(leng-2):
                i, j, k = l[it], l[it+1], l[it+2]
                temp = abs(i - j) + abs(j - k) + abs(k - i)
                if cur_min == -1:
                    cur_min = temp
                else:
                    cur_min = min(temp, cur_min)
            
        return cur_min
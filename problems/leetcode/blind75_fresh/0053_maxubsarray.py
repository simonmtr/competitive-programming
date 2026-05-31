class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = nums[0]
        cursum = 0
        for num in nums:
            if cursum < 0:
                cursum = 0
            cursum += num
            res = max(res, cursum)
        return res
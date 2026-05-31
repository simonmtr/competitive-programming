class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = set()
        indi = {}
        for i, num in enumerate(nums):
            if (target-num) in seen:
                return (indi[(target-num)], i)
            seen.add(num)
            indi[num] = i

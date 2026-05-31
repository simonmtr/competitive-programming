class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        res = nums[0] + nums[1] + nums[2] 
        for i in range(len(nums) - 2):
            left, right = i + 1, len(nums) - 1
            while left < right:
                tempsum = nums[i] + nums[left] + nums[right]
                if abs(target - tempsum) < abs(target - res):
                    res = tempsum
                if tempsum == target:
                    return target
                elif tempsum < target:
                    left += 1
                else:
                    right -= 1
            
        return res
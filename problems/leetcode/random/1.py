class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        diff = {} 
        for i in range(len(nums)):
            missing = target-nums[i]
            if missing in diff.keys():
                return [diff[missing][1],i]
            diff[nums[i]] = [missing,i]
        return diff
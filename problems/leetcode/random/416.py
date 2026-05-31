class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        if sum(nums) % 2 == 1:
            return False
        dp = set([0])
        dp.add(0)
        target = sum(nums)/2

        for i in range(len(nums) -1, -1, -1):
            temp_dp = set()
            for j in dp:
                if (j+nums[i]) == target:
                    return True
                temp_dp.add(j+nums[i])
                temp_dp.add(j)
            dp = temp_dp
        return True if target in dp else False
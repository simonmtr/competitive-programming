class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        p = None
        found = False
        for i in range(len(nums) - 1, 0, -1):
            if nums[i] > nums[i-1]:
                p = i - 1
                found = True
                break
        if not found:
            nums.reverse()
            return
        swap = len(nums) - 1
        while nums[swap] <= nums[p]:
            swap -= 1
        nums[p], nums[swap] = nums[swap], nums[p]
        nums[p + 1:] = reversed(nums[p+1:])

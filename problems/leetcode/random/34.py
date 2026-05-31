class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        if not nums:
            return [-1, -1]
        def find_border(searchleft):
            left, right = 0, len(nums) - 1
            tempindex = -1
            while left <= right:
                mid = (left+right)//2
                if nums[mid] < target:
                    left = mid + 1
                elif nums[mid] > target:
                    right = mid - 1
                else:
                    tempindex = mid
                    if searchleft:
                        right = mid - 1
                    else:
                        left = mid + 1
            return tempindex
        
        return [find_border(True), find_border(False)]
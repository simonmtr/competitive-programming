class Solution(object):
    def maxArea(self, height):
        max_heighest = 0
        l, r = 0, len(height) - 1
        while l<r:
            width = r-l
            temp_height = min(height[l], height[r])
            value = width*temp_height
            max_heighest = max(max_heighest, value)
            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        return max_heighest
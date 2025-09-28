class Solution:
    def trap(self, height: List[int]) -> int:
        if len(height) < 2:
            return 0
        left, right = 0, len(height) - 1
        volume = 0
        maxleft, maxright = height[left], height[right]

        while right > left:
            if maxright < maxleft:
                right -= 1
                maxright = max(height[right], maxright)
                volume += abs(maxright - height[right])
            else:
                left += 1
                maxleft = max(height[left], maxleft)
                volume += abs(maxleft - height[left])
        return volume

class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stck = []
        max_area = 0

        for i, h in enumerate(heights):
            start_i = i
            while stck and stck[-1][1] > h:
                temp_index, temp_height = stck.pop()
                max_area = max(max_area, temp_height * (i - temp_index))
                start_i = temp_index
            stck.append((start_i, h))
        
        for i, h in stck:
            max_area = max(max_area, h * (len(heights) - i))
        return max_area
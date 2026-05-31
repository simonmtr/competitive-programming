class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        long_arr, short_arr = nums1, nums2
        if len(long_arr) < len(short_arr):
            long_arr, short_arr = short_arr, long_arr
        
        combined_len = len(long_arr) + len(short_arr)
        halfway = combined_len // 2
        left, right = 0, len(short_arr) - 1

        while True:
            short_arr_pointer = (left + right) // 2
            long_arr_pointer = halfway - short_arr_pointer - 2

            short_arr_left = short_arr[short_arr_pointer] if short_arr_pointer >= 0 else float("-infinity")
            short_arr_right = short_arr[short_arr_pointer + 1] if (short_arr_pointer + 1) < len(short_arr) else float("infinity")
            long_arr_left = long_arr[long_arr_pointer] if long_arr_pointer >= 0 else float("-infinity")
            long_arr_right = long_arr[long_arr_pointer + 1] if (long_arr_pointer + 1) < len(long_arr) else float("infinity")

            if short_arr_left <= long_arr_right and long_arr_left <= short_arr_right:
                if combined_len % 2:
                    return min(short_arr_right, long_arr_right)
                return (max(short_arr_left, long_arr_left) + min(short_arr_right, long_arr_right)) / 2
            elif short_arr_left > long_arr_right:
                right = short_arr_pointer - 1
            else:
                left = short_arr_pointer + 1
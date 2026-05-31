class Solution(object):
    def longestConsecutive(self, nums):
        numset = set(nums)
        longest = 0
        for number in numset:
            if number - 1 not in numset:
                # start of sequence
                current = 1
                while number + 1 in numset:
                    current += 1
                    number += 1
                longest = max(longest, current)
        return longest
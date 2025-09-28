class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest = 0
        foundchars = set()
        leftpoint = 0 
        
        for i in range(len(s)):
            while s[i] in foundchars:
                foundchars.remove(s[leftpoint])
                leftpoint +=1
            foundchars.add(s[i])
            longest = max(longest, i - leftpoint + 1)
        return longest
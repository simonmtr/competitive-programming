class Solution:
    def longestPalindrome(self, s: str) -> str:
        if not s:
            return ""

        def aroundcenter(s, left, right):
            while left >=0 and right < len(s) and s[left]==s[right]:
                left -= 1
                right += 1
            return right - left - 1
        start, end = 0, 0

        for i in range(len(s)):
            odd = aroundcenter(s, i, i)
            even = aroundcenter(s, i, i+1)
            max_length = max(odd, even)
            if max_length > end - start:
                start = i - (max_length - 1)//2
                end = i + max_length // 2
            
        return s[start:end+1]
class Solution(object):
    def isPalindrome(self, s):
        l, r = 0, len(s) - 1
        while l < r:
            if not s[l].isalnum():
                l += 1
                continue
            elif not s[r].isalnum():
                r -= 1
                continue
            elif s[l].lower() == s[r].lower():
                l += 1
                r -= 1
            else: 
                return False
        return True
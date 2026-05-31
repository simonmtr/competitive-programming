class Solution(object):
    def isValid(self, s):
        bracket_dict = {')':'(', ']':'[','}':'{'}
        mystack = []
        for i in range(len(s)):
            if s[i] in bracket_dict.keys():
                if not mystack or mystack[-1] != bracket_dict[s[i]]:
                    return False
                mystack.pop()
            else:
                mystack.append(s[i])
        return not mystack
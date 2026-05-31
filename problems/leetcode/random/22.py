class Solution(object):
    def generateParenthesis(self, n):
        stack = []
        result = []
        def backtrack(openbrackets, closedbrackets):
            if openbrackets == closedbrackets == n:
                result.append("".join(stack))
                return
            if openbrackets < n:
                stack.append('(')
                backtrack(openbrackets + 1, closedbrackets)
                stack.pop()
            if closedbrackets < openbrackets:
                stack.append(")")
                backtrack(openbrackets, closedbrackets + 1)
                stack.pop()
        backtrack(0, 0)
        return result
            
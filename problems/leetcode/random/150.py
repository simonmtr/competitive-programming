class Solution(object):
    def evalRPN(self, tokens):
        stack = []
        for c in tokens:
            if c not in '+-/*':
                stack.append(int(c))
            else:
                a, b = stack.pop(), stack.pop()    
                if c == '+':
                    stack.append(b+a)
                elif c == '-':
                    stack.append(b-a)
                elif c == '*':
                    stack.append(b*a)
                else:
                    stack.append(int(float(b)/a))
        return stack.pop()
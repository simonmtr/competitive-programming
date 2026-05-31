class Solution(object):
    def dailyTemperatures(self, temperatures):
        answer = [0] * len(temperatures)
        stack = []
        for r in range(len(temperatures)):
            while stack and temperatures[stack[-1]] < temperatures[r]:
                l = stack.pop()
                answer[l] = r-l

            stack.append(r)
        return answer
    
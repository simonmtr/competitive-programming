class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        n = len(boxes)
        res = [0] * n

        prefix_sum, prefix_count = 0, 0

        for i in range(n):
            res[i] = prefix_count * i - prefix_sum
            if boxes[i] == '1':
                prefix_count += 1
                prefix_sum += i
        
        suffix_count, suffix_sum = 0, 0
        for i in range(n - 1, -1, -1):
            res[i] += suffix_sum - suffix_count * i
            if boxes[i] == '1':
                suffix_count += 1
                suffix_sum += i
        
        return res
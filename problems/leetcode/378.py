class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        heap, res = [], -1
        for row in matrix:
            for column in row:
                heappush(heap, column)
        
        for i in range(k):
            res = heappop(heap)
        
        return res
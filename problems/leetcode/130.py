class Solution:
    def solve(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        if not board or not board[0]:
            return board
        rows, columns = len(board), len(board[0])
        safe = set()
        def dfs(m, n):
            if m < 0 or m >= rows or n < 0 or n >= columns:
                return
            if board[m][n] != 'O' or (m, n) in safe:
                return
            
            safe.add((m,n))
            dfs(m+1, n)
            dfs(m-1, n)
            dfs(m, n+1)
            dfs(m, n-1)
        
        for row in range(rows):
            dfs(row, 0)
            dfs(row, columns -1)
        
        for column in range(columns):
            dfs(0, column)
            dfs(rows - 1, column)
        
        for row in range(rows):
            for column in range(columns):
                if (row,column) in safe:
                    board[row][column] = 'O'
                elif board[row][column] == 'O':
                    board[row][column] = 'X'

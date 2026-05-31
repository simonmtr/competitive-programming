class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        
        seen = set()
        
        def dfs(n, m, wlen):
            if wlen == len(word):
                return True
            if n < 0 or n>=len(board) or m < 0 or m >= len(board[0]) or board[n][m] != word[wlen] or (n,m) in seen:
                return False
            
            seen.add((n,m))
            res = dfs(n+1, m, wlen+1) or dfs(n-1, m, wlen+1) or dfs(n, m+1, wlen+1) or dfs(n, m-1, wlen+1)
            seen.remove((n,m))
            return res
        for i in range(len(board)):
            for j in range(len(board[0])):
                if dfs(i,j,0):
                    return True

        
        
        return dfs(0, 0, 0)
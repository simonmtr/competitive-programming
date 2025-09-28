class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = collections.defaultdict(set)
        columns = collections.defaultdict(set)
        squares = collections.defaultdict(set)
        
        for row in range(9):
            for column in range (9):
                if board[column][row] == '.':
                    continue
                if board[column][row] in rows[row] or board[column][row] in columns[column] or board[column][row] in squares[row//3,column//3]:
                    return False
                rows[row].add(board[column][row])
                columns[column].add(board[column][row])
                squares[row//3,column//3].add(board[column][row])
        return True
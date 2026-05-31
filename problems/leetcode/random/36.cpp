class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> columns[9];
        unordered_set<char> boxes[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char cur = board[i][j];
                if (cur == '.') {
                    continue;
                }
                int index = 3 * (i / 3) + (j / 3);
                if (rows[i].count(cur) || columns[j].count(cur) || boxes[index].count(cur)) {
                    return false;
                }
                rows[i].insert(cur);
                columns[j].insert(cur);
                boxes[index].insert(cur);
            }
        }
        return true;



    }
};
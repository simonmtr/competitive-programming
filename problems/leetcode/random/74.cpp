class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top_row = 0;
        int bottom_row = matrix.size() - 1;

        while (top_row <= bottom_row) {
            int mid_row = (top_row + bottom_row) / 2;
            if (matrix[mid_row][0] < target && matrix[mid_row][matrix[mid_row].size() - 1] > target) {
                break;
            } else if (matrix[mid_row][0] > target) {
                bottom_row = mid_row - 1;
            } else {
                top_row = mid_row + 1;
            }
        }
        int mid_row_res = (top_row + bottom_row) / 2;
        int left = 0;
        int right = matrix[mid_row_res].size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (matrix[mid_row_res][mid] == target) {
                return true;
            } else if (matrix[mid_row_res][mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stck;
        int max_area = 0, n = heights.size();

        for (int i = 0; i < n; i++) {
            while(!stck.empty() && heights[i] < heights[stck.top()]) {
                int temp_height = stck.top();
                stck.pop();
                int temp = stck.empty() ? -1 : stck.top();
                int start_i = i;
                max_area = max(max_area, heights[temp_height] * (start_i - temp - 1));
            }
            stck.push(i);
        }
        while (!stck.empty()) {
            int temp_height = stck.top();
                stck.pop();
                int temp = stck.empty() ? -1 : stck.top();
                int start_i = n;
                max_area = max(max_area, heights[temp_height] * (start_i - temp - 1));
        }

        return max_area;

    }
};
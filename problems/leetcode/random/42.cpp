class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() < 2) {
            return 0;  
        }
        int left = 0, right = height.size() - 1, volume = 0, max_left = height[left], max_right = height[right];
        while (left < right) {
            if (max_right < max_left) {
                right--;
                max_right = max(max_right, height[right]);
                volume += abs(max_right - height[right]);
            } else {
                left++;
                max_left = max(max_left, height[left]);
                volume += abs(max_left - height[left]);
            }
        }
        return volume;
    }
};
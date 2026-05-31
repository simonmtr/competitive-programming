class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& short_arr = nums1;
        vector<int>& long_arr = nums2;
        int combined_len = short_arr.size() + long_arr.size();
        int halfway = (combined_len + 1) / 2;

        if (long_arr.size() < short_arr.size()) {
            swap(short_arr, long_arr);
        }

        int l = 0;
        int r = short_arr.size();
        while (l <= r) {
            int short_arr_pointer = (l + r) / 2;
            int long_arr_pointer = halfway - short_arr_pointer;

            int short_arr_left = short_arr_pointer > 0 ? short_arr[short_arr_pointer - 1] : INT_MIN;
            int short_arr_right = short_arr_pointer < short_arr.size() ? short_arr[short_arr_pointer] : INT_MAX;
            int long_arr_left = long_arr_pointer > 0 ? long_arr[long_arr_pointer - 1] : INT_MIN;
            int long_arr_right = long_arr_pointer < long_arr.size() ? long_arr[long_arr_pointer] : INT_MAX;

            if (short_arr_left <= long_arr_right && long_arr_left <= short_arr_right) {
                if (combined_len % 2 != 0) {
                    return max(short_arr_left, long_arr_left);
                }
                return (max(short_arr_left, long_arr_left) + min(short_arr_right, long_arr_right)) / 2.0;
            } else if (short_arr_left > long_arr_right) {
                r = short_arr_pointer - 1;
            } else {
                l = short_arr_pointer + 1;
            }
        }
        return -1;
    }
};
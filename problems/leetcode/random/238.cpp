class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          int size = nums.size();
          int begin = 1;
          int last = 1;
          vector<int> res(size,1);

          for (int i = 0; i<size; i++) {
            res[i] *= begin;
            begin *= nums[i];
            res[size - 1 - i] *= last;
            last *= nums[size - 1 - i];
          }
          return res;
    }
};
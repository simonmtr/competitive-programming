class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> c;

        for (int i = 0; i<nums.size(); i++) {
            if (c.contains(target - nums[i])) {
                return {c.at(target - nums[i]), i};
            }
            c[nums[i]] = i;
        }
        return {0, 0};
    }
};
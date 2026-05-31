class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        unordered_map<int, int> counts;
        vector<int> res;
        for (int i = 0; i<nums.size(); i++) {
            counts[nums[i]]++;
        }

        for (auto i = counts.begin(); i != counts.end();i++) {
            min_heap.push({i -> second, i -> first});
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }
        while (min_heap.size() > 0) {
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return res;
    }
};
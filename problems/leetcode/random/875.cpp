class Solution {
private:
    long long hours_to_finish_bananas(vector<int>& piles, int eating_speed) {
        long long total = 0;
        for (auto p : piles) {
            total += (long long) (p + (eating_speed - 1))/eating_speed;
        }
        return total;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end()), res = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long hours = hours_to_finish_bananas(piles, mid);
            if (hours <= h) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;

    }
};
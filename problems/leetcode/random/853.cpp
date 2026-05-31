class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int, int>> cars;
        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), greater<pair<int, int>>());

        stack<double> fleets;

        for (auto& car : cars) {
            double endtime = (double) (target - car.first) / car.second;

            if (fleets.empty() || endtime > fleets.top()) {
                fleets.push(endtime);
            }
        }

        return fleets.size();
    }
};
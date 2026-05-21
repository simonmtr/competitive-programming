// Did TLE
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> number_visits_value;
        map<int, long long> needed_steps;

        for(int i = 0; i<n; ++i) {
            int temp;
            cin >> temp;
            set<int> visited;
            int number_steps = 0;

            while(true) {
                if (!visited.count(temp)) {
                    visited.insert(temp);
                    number_visits_value[temp]++;
                    needed_steps[temp] += number_steps;
                }
                if (temp == 1) {
                    temp++;
                    if (!visited.count(temp)) {
                        visited.insert(temp);
                        number_visits_value[temp]++;
                        needed_steps[temp] += (number_steps + 1);
                    }
                    break;
                } else if (temp == 2) {
                    temp--;
                    if (!visited.count(temp)) {
                        visited.insert(temp);
                        number_visits_value[temp]++;
                        needed_steps[temp] += (number_steps + 1);
                    }
                    break;
                } else if (temp % 2 == 1) {
                    temp += 1;
                } else {
                    temp /= 2;
                }
                number_steps++;
            }
        }

        long long min_steps = -1;

        for (const auto& pair : number_visits_value) {
            if (pair.second == n) {
                if (min_steps == -1 || needed_steps[pair.first] < min_steps) {
                    min_steps = needed_steps[pair.first];
                }
            }
        }

        cout << min_steps << endl;
    }
}

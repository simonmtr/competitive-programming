#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string c, trafficlight;
        cin >> n >> c >> trafficlight;


        trafficlight+=trafficlight;
        int current_max = 0, temp_max = 0;
        for (int i = 0; i<2*n; i++) {
            if (trafficlight[i] == c[0]) {
                temp_max = 0;
                while (trafficlight[i] != 'g' && i<2*n) {
                    temp_max++;
                    i++;
                }
                current_max = max(current_max, temp_max);
            }
        }
        cout << current_max << endl;
    }
}

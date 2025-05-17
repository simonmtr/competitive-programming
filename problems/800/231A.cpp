#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, part1, part2, part3;
    cin >> t;
    int result = 0;
    while(t--) {
        cin >> part1 >> part2 >> part3;
        if ((part1 + part2 + part3) >= 2) {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include <string>
typedef long long ll;

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    string s, o, res = "A", c, compare_c;
    int left=0, right=1, mid=0, comparison_i=1;
    for (int i = 0; i<n;i++) s+=(char) ('A' + i);
    for (int i = 1; i<n;i++) {
        c = s[comparison_i];
        while (left < right) {
            mid = left + (right-left)/2;
            compare_c = res[mid];
            cout << c << compare_c;
            fflush(stdout);
            cin >> o;
            if (o == ">") {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << "res: " << res << endl;
        cout << "char:" << c << " at " << mid << endl;
        res.insert(mid, c);
        cout << "res after: " << res << endl;
        comparison_i++;
        left = 0;
        right = res.length();
    }

    
    cout << res;
    fflush(stdout);

}

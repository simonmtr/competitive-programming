#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    
    int a = sqrt((x * y) / z);
	int b = sqrt((x * z) / y);
	int c = sqrt((y * z) / x);
	int res = 4 * (a + b + c);
	cout << res << endl;

}

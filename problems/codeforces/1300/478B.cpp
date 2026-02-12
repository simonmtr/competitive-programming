#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int get_pairs(long long int n) {
    return n * (n - 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    long long int groups_with_normal_amount(n / m), groups_with_plus_one_amount(n % m);
    long long int min_pairs = get_pairs(groups_with_normal_amount) * (m - groups_with_plus_one_amount) + get_pairs(groups_with_normal_amount + 1) * groups_with_plus_one_amount;
    long long int max_pairs = get_pairs(n - m + 1);
    cout << min_pairs << " " << max_pairs << endl;
    return 0;
}


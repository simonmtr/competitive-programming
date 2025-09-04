#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int nums[100005];
    for (int i = 0; i<a; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + a);
    int maxim = 0;
    for (int i = 0; i<a-1; i++) {
        if (nums[i+1] - nums[i] > maxim) {
            maxim = nums[i+1] - nums[i];
        }
    }
    double res, rad, p, q, l;
    p = nums[0];
    q = (double) maxim/2;
    rad = max(p, q);
    l = (double) b - nums[a-1];
    res = max(l, rad);
    printf("%.10f ", res);
}

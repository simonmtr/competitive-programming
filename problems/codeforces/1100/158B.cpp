#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    int ones=0, twos=0, threes=0;
    int group;
    int res = 0;
    for (int i = 0; i<t; i++) {
        cin >> group;
        if (group == 1) {
            ones++;
        } else  if (group == 2) {
            twos++;
        } else if (group == 3) {
            threes++;
        } else {
            res++;
        }
    }
    while (ones+twos+threes > 0) {
        if (threes > 0 && ones > 0) {
            res++;
            threes--;
            ones--;
        } else if (twos > 1) {
            twos = twos - 2;
            res++;
        } else if (ones > 0 && twos == 1) {
            int temp = ones;
            ones = ones - min(temp, 2);
            twos--;
            res++;
        } else if (ones > 0) {
            ones = ones - min(4, ones);
            res++;
        } else if (ones == 0 && twos == 1) {
            twos--;
            res++;
        } else {
            res += ones + twos + threes;
            ones = 0;
            twos = 0;
            threes = 0;
        }
    }

    cout << res + ones + twos + threes;
}

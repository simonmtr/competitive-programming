#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;

    int result = 1;
    while (result * 5 < n)
    {
        n -= result * 5;
        result *= 2;
    }

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    cout << names[(n - 1) / result] << endl;


}

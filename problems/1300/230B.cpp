#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    long long t;
    cin >> t;
    vector<long long> numbers;
    for (long long i = 0; i < t; i++) {
        long long number;
        cin >> number;
        numbers.push_back(number);
    }
    vector<long long> prime_numbers(100003, 0);
    prime_numbers[0] = 1;
    prime_numbers[1] = 1;
   for (long long i = 2; i <100003; i++){
        if (prime_numbers[i] == 0) {
            for (long long j = i*i; j<100003; j+=i) {
                prime_numbers[j] = 1;
            }
        }
    }
    for (auto n : numbers) {
       if (n == 4) {
        cout << "YES" << endl;
            continue;
       }
       if (n<4 || n%2 == 0) {
            cout << "NO" << endl;
            continue;
       }
        long double sq = pow(n, 0.5);
        if (sq == (long long) sq && sq <100003)  {
            if (prime_numbers[(long long) sq] == 0) {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
}


#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
   int t;
   cin >> t;
   for (int i = 0; i<t; i++) {
      int n, k;
      cin >> n >> k;
      vector<int> left(n);
      vector<int> right(n);
      vector<int> no_glove;
      int total_sum = 0;
      for (int j = 0; j<n; j++) {
         cin >> left[j];
         total_sum += left[j];
         no_glove.push_back(left[j]);
      }
      for (int j = 0; j<n; j++) {
         cin >> right[j];
         total_sum += right[j];
         no_glove[j] = min(no_glove[j], right[j]);
      }
      
      if (n == k) {
         cout << total_sum << endl;
         continue;
      }
      stable_sort(no_glove.begin(), no_glove.end());
      for (int i = 0; n-i>k; i++) {
         total_sum-=no_glove[i];
      }
      cout << total_sum << endl;
   }
   
}

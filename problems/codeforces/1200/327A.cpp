#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ll n;
    cin >> n;
    ll ones=0, sum=0, ans=0, inputnumber=0;
    for (ll i = 0;i<n;i++){
        cin >> inputnumber;
        if (inputnumber == 0) {
            sum++;
        } else {
            ones++;
            sum--;
        }
        ans = max(ans, sum);
        if (sum < 0) sum = 0;
    }
    
    if (ones == n) cout << ones - 1;
    else cout << ones + ans;
}

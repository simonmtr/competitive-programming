#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <set>
typedef long long ll;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    map<int, string> food_strings;
    for (ll i = 0; i<m; i++){
        ll k;
        cin >> k;
        for (ll j = 0; j<k; j++){
            ll ing;
            cin >> ing;
            food_strings[j] += to_string(ing);
        }
    }
    vector<ll> b(n);
    for (ll i = 0; i<n; i++) {
        cin >> b[i];
    }

    ll foodamounts = 0;
    set<ll> seen_foods;
    for (ll i = 0; i<n;i++){
        for (ll j = 0; j<m;j++) {
            for(ll h = 0; h<b.size();h++){
                string bstring = to_string(b[h]);
                if (food_strings[j].find(bstring)) {
                    food_strings[j].erase(remove(food_strings[j].begin(), food_strings[j].end(),bstring[0]), food_strings[j].end());
                } else if (!seen_foods.count(j)){
                    foodamounts++;
                    seen_foods.insert(j);
                }
            }
            
        }
        cout << foodamounts << endl;
    }
}

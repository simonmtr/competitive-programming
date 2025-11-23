#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int cnt_ones(int val) 
{ 
	int ret = 0; 
	while(val > 0) 
	{ 
		ret++; 
		val = val&(val-1); 
	} 
	return ret; 
} 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k; 
	vector<int> v(m); 
	int fedor_value, ans=0; 
	for(int i=0; i<m; i++) {
        cin>>v[i];
    }  
	cin >> fedor_value; 
	for(int i=0; i<m; i++) {
        if(cnt_ones(fedor_value ^ v[i]) <= k) {
            ans++;
        }
    } 
	cout << ans << endl; 
}

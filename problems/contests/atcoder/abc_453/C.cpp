#include <iostream>
#include <bits/stdc++.h>

using namespace std;

    
int check_plus_res(double pos1, double pos2) {
    if ((pos1 < 0 && pos2 > 0) || (pos2 < 0 && pos1 > 0)) {
        return 1;
    }
    return 0;
}

long long dfs(vector<double> remainingnums, double cur_pos, int cur_res){
    // cout << "Checking " << cur_pos << "  " << cur_res << endl;
    if (remainingnums.size() == 0) {
        return cur_res;
    }
    double cur_val = remainingnums[0];
    // cout << "curval: " << cur_val << endl;
    vector<double> new_remaining_nums(remainingnums.begin() + 1, remainingnums.end());
    
    double pos_added = cur_pos + cur_val;
    double cur_res_added = cur_res + check_plus_res(cur_pos, pos_added);
    int res_added = dfs(new_remaining_nums, pos_added, cur_res_added);

    double pos_substracted = cur_pos - cur_val;
    double cur_res_substracted = cur_res + check_plus_res(cur_pos, pos_substracted);
    int res_substracted = dfs(new_remaining_nums, pos_substracted, cur_res_substracted);

    return max(res_added, res_substracted);

}




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    double cur_pos = 0.5;
    vector<double> nums(n);
    for (long long i = 0; i<n; ++i) {
        cin >> nums[i];
    }

    long long res = dfs(nums, cur_pos, 0);
    cout << res;
}

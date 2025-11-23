#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n - 2);
    for (int j = 0; j < n - 2; j++)
    {
        cin >> b[j];
    }

    if (n == 3) {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < n-2; i++)
    {
       if (i + 2 < n-2 && b[i] == 1 && b[i+1] == 0 && b[i+2] == 1) {
        cout << "NO\n";
        return;
       }
    }
    cout << "YES\n";
    return;
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        solve();
    }
}

#include <iostream>
using namespace std;
 
int main() {
    int amount;
    cin >> amount;
    if (amount%2 == 0 && amount > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
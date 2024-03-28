#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    if (n % 6 == 1) {
        cout << ((x % MOD) + MOD) % MOD << endl;
    } else if (n % 6  == 2) {
        cout << ((y % MOD) + MOD) % MOD << endl;
    } else if (n % 6  == 3) {
        cout << (((y - x) % MOD) + MOD) % MOD << endl;
    } else if (n % 6 == 4) {
        cout << ((-x % MOD) + MOD) % MOD << endl;
    } else if (n % 6  == 5) {
        cout << ((-y % MOD) + MOD) % MOD << endl;
    } else {
        cout << (((x - y) % MOD) + MOD) % MOD << endl;
    }
}
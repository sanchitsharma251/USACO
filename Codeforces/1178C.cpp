#include <bits/stdc++.h>
using namespace std;

int MOD = 998244353;

int main() {
    int w, h;
    cin >> w >> h;

    int ans = 1;
    for (int i = 0; i < (w + h); ++i) {
        ans *= 2;
        ans = ans % MOD; 
    }

    cout << ans << endl;
}

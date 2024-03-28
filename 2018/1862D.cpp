#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll nC2(ll n) {
    return n * (n - 1) / 2;
}

int main() {
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; ++i) {
        ll n;
        cin >> n;
        ll m = floor((1 + sqrtl(1 + 8 * n)) / 2.0);
        cout << m + n - nC2(m) << endl; 
    }
}

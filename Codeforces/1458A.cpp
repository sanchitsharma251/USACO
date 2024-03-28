#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long a[n], b[m];
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    long long original_gcd = a[0];
    for (int i = 1; i < n; ++i) {
        original_gcd = __gcd(a[i], original_gcd);
    }

    for (int i = 0; i < m; ++i) {
        cout << __gcd(original_gcd, b[i]) + b[i] << " ";
    }
}
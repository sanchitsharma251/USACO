#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i) cin >> A[i];
    int B[n - 1];
    for (int i = 0; i < n - 1; ++i) B[i] = A[i + 1];
    sort(B, B + n - 1);
    int x = A[0];
    for (int j = 0; j < n - 1; ++j) {
        if (B[j] >= x) {
            x += (int)(ceil((B[j] - x) / 2.0));
        }
    }
    cout << x << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
}
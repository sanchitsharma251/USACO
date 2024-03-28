#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int A[n];
    for (int i = 0; i < n; ++i) cin >> A[i];

    sort(A, A + n);
    int ans = n;
    int l = 0;
    for (int i = n - 1; i > l; --i) {
        if (A[i] + A[l] <= x) {
            ++l;
            --ans;
        }
    }

    cout << ans << endl;
}
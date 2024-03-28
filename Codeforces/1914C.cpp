#include <bits/stdc++.h>
using namespace std;

int solve(int A[], int B[], int n, int k) {
    int a, b;
    int ans = 0;
    a = 0; b = 0;
    for (int i = 0; i < n; ++i) {
        if (k > i) {
            a += A[i];
            b = max(b, B[i]);
            ans = max(ans, a + (k - i - 1) * b);
        }
    }
    return ans;
}


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        int A[n], B[n];
        for (int j = 0; j < n; ++j) cin >> A[j];
        for (int j = 0; j < n; ++j) cin >> B[j];

        cout << solve(A, B, n, k) << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];
        cin >> m;
        int B[n + 1];
        int C[n + 1];
        B[0] = 0;
        B[1] = 1;
        C[n] = 0;
        for (int i = 2; i < n; ++i) {
            if (A[i - 1] - A[i - 2] < A[i] - A[i - 1]) {
                B[i] = (B[i - 1] + A[i] - A[i - 1]);
            } else {
                B[i] = (B[i - 1] + 1);
            }
        }
        for (int i = n - 2; i > 0; --i) {  
            if (A[i] - A[i - 1] < A[i + 1] - A[i]) {
                C[i] = (C[i + 1] + 1);
            } else {
                C[i] = (C[i + 1] + A[i] - A[i - 1]);
            }
        }
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            if (x > y) {
                cout << C[y] - C[x] << endl;
            } else {
                cout << B[y - 1] - B[x - 1] << endl;
            }
        }
    }
}

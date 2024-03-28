#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];
        sort(A, A + n);
        int wins = 0;
        for (int i = 0; i < n; ++i) {
            if (m >= A[i]) {
                ++wins;
                m -= A[i];
            }
        }
        
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        int A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];

        vector<int> lower(n);
        vector<int> upper(n);
        for (int i = 0; i < n; ++i) {
            lower[i] = l - A[i];
            upper[i] = r - A[i];
        }
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());
        int pairs = 0;
        for (int i = 0; i < n; ++i) {
            // Given two ranges, how can I figure out how many positions? 
        }
        cout << pairs / 2 << endl;
    }
}

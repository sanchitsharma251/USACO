#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        int A[n*n];
        for (int i = 0; i < n*n; ++i) cin >> A[i];
        // Check if they are equal
        int l = 0;
        int r = n*n - 1;
        int answer = 0;
        while (r > l) {
            answer += (A[l] != A[r]);
            --r;
            ++l;
        }
        if (answer <= k && (n % 2 == 1 || (k - answer) % 2 == 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
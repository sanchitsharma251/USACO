#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        int flip = (a[0] > 0);
        long long mx = a[0];
        long long answer = 0;
        for (int i = 0; i < n; ++i) {
            if (flip == (a[i] > 0)) {
                mx = max(mx, a[i]);
            } else {
                answer += mx;
                flip = !flip;
                mx = a[i]; 
            }
        }

        cout << answer + mx << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        int w[k];
        for (int i = 0; i < k; ++i) cin >> w[i];

        sort(a, a + n, greater<int>());
        sort(w, w + k, greater<int>());

        long long ans = 0;

        int j = 0;
        for (int i = k - 1; i >= 0; --i) {
            if (w[i] == 1) {
                ans += 2 * a[j];
                ++j;
            } else {
                break;
            }
        }

        int l = j;
        int r = n - 1;
        j = 0;
        while (r >= l) {
            ans += a[l];
            ans += a[r];
            ++l;
            r -= (w[j] - 1);
            ++j;
        }

        cout << ans << endl;
    }
}
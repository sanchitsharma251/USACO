#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n >> q;
        int a[n];
        int b[q];
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < q; ++i) cin >> b[i];

        ll pre[n];
        pre[0] = a[0];
        for (int i = 1; i < n; ++i) pre[i] = a[i] + pre[i - 1];
       
        vector<int> premax(n);
        premax[0] = a[0];
        for (int i = 1; i < n; ++i) premax[i] = max(premax[i - 1], a[i]);

        for (int i = 0; i < q; ++i) {
            auto upper = upper_bound(premax.begin(), premax.end(), b[i]);
            if (upper != premax.begin()) {
                --upper;
            } else {
                cout << 0 << " ";
                continue;
            }
            cout << pre[upper - premax.begin()] << " ";
        }
        cout << endl; 

    }
}

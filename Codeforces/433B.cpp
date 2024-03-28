#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    ll pre[n + 1];
    pre[0] = 0;
    for (int i = 1; i < n + 1; ++i) {
        pre[i] = pre[i - 1] + a[i - 1];
    }


    sort(a.begin(), a.end());
    ll pre2[n + 1];
    pre2[0] = 0;
    for (int i = 1; i < n + 1; ++i) {
        pre2[i] = pre2[i - 1] + a[i - 1];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << pre[r] - pre[l - 1] << endl;
        } else {
            cout << pre2[r] - pre2[l - 1] << endl;
        }
    }   

}

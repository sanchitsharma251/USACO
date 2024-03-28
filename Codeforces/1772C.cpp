#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        int increment = 0;
        for (int i = 1; i <= k; ++i) {
            if ((i * (i - 1) / 2 + 1) < n)
                cout << i * (i - 1) / 2 + 1 << " ";
            else {
                cout << n + increment << " ";
                ++increment;
            }
        }
        cout << endl;
    }
}

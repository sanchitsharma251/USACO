#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> A;
        map<int, int> B;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            A[x] = i;
        }
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            B[x] = i;
        }

        int mo = 10e5+1;
        int ans = 2*10e5;
        for (int i = 2; i <= 2 * n; i += 2) {
            mo = min(mo, A[i - 1]);
            ans = min(ans, B[i] + mo);
        }
        
        cout << ans << endl;

    }
}
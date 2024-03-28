#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        ll d;
        cin >> n >> m >> d;
        ll A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];

        multiset<int> ms;
        ll ans = 0;
        ll ssf = 0;

        for (int i = 0; i < n; ++i) {
            if (ms.size() < m) {
                if (A[i] > 0) { 
                    ms.insert(A[i]);
                    ssf += A[i];
                    ans = max(ans, ssf - d * (i + 1)); 
                }
            } else {
                int start = *(ms.begin());
                if (A[i] >= start) {
                    ssf -= start;
                    ssf += A[i];
                    ans = max(ans, ssf - d * (i + 1));
                    ms.erase(ms.begin()); 
                    ms.insert(A[i]);
                }
            }
        }
        cout << ans << endl;
    }
}
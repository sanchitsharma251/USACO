#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < m; ++i) cin >> b[i];
        
        sort(a, a + n, greater<int>());
        int j = 0;
        ll answer = 0;
        for (int i = 0; i < n; ++i) {
            answer += min(b[j], b[a[i] - 1]);
            if (b[j] < b[a[i] - 1]) ++j;
        }
        cout << answer << endl;
    }
}

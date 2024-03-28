#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        priority_queue<int> pq;
        ll ans = 0;
        for(int i = 0; i < n; ++i) {
            if(a[i] == 0 && pq.size()) {
                ans += pq.top();
                pq.pop();
            } else {
                pq.push(a[i]);
            }
        }
        cout << ans << endl;
    }
}

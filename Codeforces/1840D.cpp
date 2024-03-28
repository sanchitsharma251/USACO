#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(int A[], int n, int target) {
    ll current = A[0] + target;
    ll cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (abs(A[i] - target) > current) {
            current = A[i] + target;
            ++cnt;
        }
    }
    return cnt <= 3;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];
        sort(A, A + n);
        ll lo = 0;
        ll hi = 1000000000;
        ll answer = 1000000000;
        while (lo <= hi) {
            ll mid = lo + (hi - lo) / 2;
            if (check(A, n, mid)) {
                hi = mid - 1;
                answer = mid;
            } else {
                lo = mid + 1;
            }
        }
        cout << answer << endl;
            
    }
}

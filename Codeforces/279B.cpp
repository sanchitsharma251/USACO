#include <bits/stdc++.h>
using namespace std;

int check(int n, int t, int a[], int books) {
    int sum = 0;
    for (int i = 0; i < books; ++i) 
        sum += a[i];
    int j = 0;
    for (int i = books; i < n; ++i) {
        if (t >= sum) return 1;
        else {
            sum -= a[j];
            sum += a[i];
        }
        ++j;
    }
    if (t >= sum) return 1;
    return 0; 
}

int solve(int n, int t, int a[]) {
    int lo = 0;
    int hi = n;
    int ans = 0;
    while (hi >= lo) {
        int mid = lo + (hi - lo) / 2;
        if (check(n, t, a, mid)) {
            ans = max(ans, mid);
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << solve(n, t, a) << "\n"; 
}
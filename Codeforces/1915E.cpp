#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];

        map<ll, ll> mp;
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 1) A[i] *= -1;
            sum += A[i];
            mp[sum] = i;
        }
    }
}

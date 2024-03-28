#include <bits/stdc++.h>
using namespace std;

long long nC2(long long n) {
    return n * (n - 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        int b[n];
        for (int j = 0; j < n; ++j) {
            b[j] = a[j] - (j + 1);
        }

        map<long long, long long> mp;
        for (int i = 0; i < n; ++i) {
            ++mp[b[i]];
        }

        long long answer = 0;
        for (auto x: mp) {
            answer += nC2(x.second);
        }

        cout << answer << endl;
    }
}

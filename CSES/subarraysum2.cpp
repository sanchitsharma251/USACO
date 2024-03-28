#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    long long A[n];
    for (int i = 0; i < n; ++i) cin >> A[i];

    long long pre[n + 1];
    pre[0] = 0;
    for (int i = 1; i < n + 1; ++i) pre[i] = pre[i - 1] + A[i - 1];

    long long answer = 0;
    map<long long, long long> mp;
    for (int i = 0; i < n + 1; ++i) {
        answer += mp[pre[i] - x];
        ++mp[pre[i]];
    }

    cout << answer;
}
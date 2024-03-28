#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9+7;

int main() {
    int n;
    cin >> n;
    ll dp[n+1];
    dp[0] = 1;
    for (int i = 1; i < n + 1; ++i) {
        int answer = 0;
        for (int j = i - 1; j > i - 7; --j) {
            if (j < 0) break;
            answer += dp[j];
            answer = answer % MOD;
        }
        dp[i] = answer;
    }
    cout << dp[n] << endl; 
}

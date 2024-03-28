#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

vector<ll> generateLCMS() {
    vector<ll> lcms = {1, 2};
    ll lcm = 2;
    for (ll i = 3; i < 42; ++i) {
        lcms.push_back(((i * lcm)) / __gcd(lcm, i));
        lcm = ((i * lcm)) / (__gcd(lcm, i)); 
    }
    return lcms;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        ll ans = 0;
        vector<ll> lcms = generateLCMS();
        for (ll i = 1; i < lcms.size(); ++i) {
            ans += (((ll)floor((double)(n / lcms[i - 1])) % MOD) - ((ll)floor((double)(n / lcms[i])) % MOD)) * (i + 1);
            ans = ans % MOD; 
        }
        cout << ans << "\n";
    }
}

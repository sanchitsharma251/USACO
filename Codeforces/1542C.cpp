#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int MOD = 1e9 + 7;

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main() {
    vector<ll> lcms = {1, 2};
    ll lcm = 2;
    for (ll i = 3; i < 42; ++i) {
        lcms.push_back(((i * lcm)) / __gcd(lcm, i));
        lcm = ((i * lcm)) / (__gcd(lcm, i)); 
    }

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        for (int i = 1; i < lcms.size(); ++i) {
                if (isPrime(i + 1) || (i + 1 == 4 || i + 1 == 8 || i + 1 == 16 || i + 1 == 32 || i + 1 == 9 || i + 1 == 27 || i + 1 == 25)) {
                    ans += (((ll)floor((double)(n / lcms[i - 1])) % MOD) - ((ll)floor((double)(n / lcms[i])) % MOD)) * (i + 1); 
                    ans = ans % MOD; 
                }
        }
        cout << ans << endl;
    }
}

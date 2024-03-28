#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

ll nC3(ll n) {
    ll product = (n) * (n-1) * (n-2);
    return product / 6;
}

ll nC2(ll n) {
    ll product = (n) * (n - 1);
    return product / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n ; ++i) {
            int x;
            cin >> x;
            ++mp[x];
        }

        ll answer = 0;
        ll cnt = 0;
        for (auto x: mp) {  
            if (x.second >= 2) {
                if (x.second >= 3) {
                    answer += nC3(x.second);
                }
                ll p = cnt * nC2(x.second);
                answer += p;
            }
            cnt += x.second;
        } 
        cout << answer << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ifstream cin("reststops.in");
    ofstream cout("reststops.out");
    ll L, N, rF, rB;
    cin >> L >> N >> rF >> rB;

    vector<pair<ll, ll>> tastyStops;
    for (ll i = 0; i < N; ++i) {
        ll x, c;
        cin >> x >> c;
        tastyStops.push_back({x, c});
    }

    ll stop = 0;
    ll bessieMeters = 0;
    ll seconds = 0;
    ll answer = 0;
    while (bessieMeters <= L) {
        ++bessieMeters;
        seconds += rB;
        ll johnMeters = seconds / rF;
        ll secondsLeft = (seconds % rF);
        if (tastyStops[stop].first == bessieMeters) {
            // Check if the next stop is greater
            
        }
    }
    cout << answer << endl;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll a, b, c, m;
    cin >> a >> b >> c >> m;

    vector<ll> USB;
    vector<ll> PS2;

    for (int i = 0; i < m; ++i) {
        ll x;
        string s;
        cin >> x >> s;
        if (s == "USB") {
            USB.push_back(x);
        }
        if (s == "PS/2") {
            PS2.push_back(x);
        }
    }
    sort(USB.begin(), USB.end());
    sort(PS2.begin(), PS2.end());

    ll minimumMouseCost = 0;
    ll minimumMouses = 0;
    ll i = 0;
    ll j = 0;

    while (i < USB.size()) {
        if (a == 0) {
            break;
        } else {
            minimumMouseCost += USB[i];
            ++minimumMouses;
            --a;
        }
        ++i;
    }
 
    while (j < PS2.size()) {
        if (b == 0) {
            break;
        } else {
            minimumMouseCost += PS2[j];
            ++minimumMouses;
            --b;
        }
        ++j;
    }

    while (c > 0 && (i < USB.size() || j < PS2.size())) {
        ++minimumMouses;
        if (i >= USB.size() && j < PS2.size()) {
            minimumMouseCost += PS2[j];
            --c;
            ++j;
            continue;
        }
        if (j >= PS2.size() && i < USB.size()) {
            minimumMouseCost += USB[i];
            --c;
            ++i;
            continue;
        }
        if (USB[i] > PS2[j]) {
            minimumMouseCost += PS2[j];
            ++j;
        } else if (USB[i] < PS2[j]) {
            minimumMouseCost += USB[i];
            ++i;
        } else {
            if (c == 1) { 
                minimumMouseCost -= USB[i];
                --minimumMouses;
                ++c; 
            }
            minimumMouseCost += USB[i];
            minimumMouseCost += PS2[j];
            ++i;
            ++j;
            --c;
            ++minimumMouses;
        }
        --c;
    }


    cout << minimumMouses << " " << minimumMouseCost << endl;

}
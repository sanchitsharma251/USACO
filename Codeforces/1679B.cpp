#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    /*
    Author: Sanchit Sharma
    Time Complexity: O(n + qlogq)
    Space Complexity: O(2n)    
    */
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    ll n, q;
    cin >> n >> q;
    vector<ll> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += A[i];
    }
    

    
    set<ll> visited;
    ll prev = -1;
    for (int i = 0; i < q; ++i) {
        int t;
        cin >> t;
        if (t == 1) {
            ll j, x;
            cin >> j >> x;
            --j;
            if (prev > 0) {
                if (visited.find(j) != visited.end()) {
                    sum += (x - A[j]);
                } else {
                    sum += (x - prev);
                }
                A[j] = x;
                visited.insert(j);
            } else {
                sum += (x - A[j]);
                A[j] = x;
            }
        } else {
            ll x;
            cin >> x;
            prev = x;
            sum = n * x;
            visited = {};
        }
        cout << sum << endl;
    }
}
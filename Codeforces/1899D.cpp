#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPowerOfTwo(int x)
{
    if(x<0) return false;
    return x && (!(x & (x - 1)));
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
        for (int i = 0; i < n; ++i) {
            if (isPowerOfTwo(a[i])) {
                b[i] = (log2(a[i]) - a[i]); 
            } else {
                b[i] = a[i];
            }
        }

        ll ans = 0;
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            ans += mp[b[i]];
            ++mp[b[i]];
        }
        cout << ans << endl;

    }
}

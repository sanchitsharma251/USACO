#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
       
        long long x = k / (n - 1) + 1;
        long long ans = x + (x - 1) * (n - 1) + k % (n - 1) - 1;
        cout << ans - (k % (n - 1) == 0) << endl; 

    }
}

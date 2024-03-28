#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        sort(a, a + n);
        int sum = 0;
        for (int i = 0; i < n - 2 * k; ++i) {
            sum += a[i];
        }

        map<int, int> mp;
         
        

    }
}

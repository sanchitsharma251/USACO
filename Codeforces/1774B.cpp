#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int a[m];
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        sort(a, a + m);
        int maximum = n / k;
        if (n % k != 0) ++maximum;
        int possible = 1;
        for(int i = 0; i < m; ++i) {
            if (a[i] > maximum) {
               possible = 0; 
            }
        }
        cout << (possible ? "YES" : "NO") << endl; 
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        int answer = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (__gcd(a[i], a[i + 1]) > 1) {
               ++answer; 
            }
        }
        cout << answer << endl;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] <= a[i + 1] && (__gcd(a[i], a[i + 1]) > 1)) {
                a[i + 1] = a[i] + 1;
                cout << i + 1 << " " << i + 2 << " " << a[i + 1] << " " << a[i] << endl;
            } else if (a[i] > a[i + 1] && (__gcd(a[i], a[i + 1])) > 1) {
                a[i] = a[i + 1] + 1;
                cout << i + 1 << " " << i + 2 << " " << a[i] << " " << a[i + 1] << endl;
            }
        }
        for (int i = 0; i < n; ++i) cout << a[i] << "  ";
    }
}

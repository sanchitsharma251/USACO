#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        ll answer = 0;
        for (int i = 1; i < n; ++i) {
            if (a[i] <= a[i - 1]) {
                answer += (a[i - 1] - a[i]); 
            }
        }

        cout << answer << endl;
    }
}

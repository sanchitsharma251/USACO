#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int same = 0;
        for (int i = 0; i < n; ++i) if (a[i] == i + 1) ++same;

        if (same == n) cout << 0 << endl;
        else if (same == 0) cout << 1 << endl;
        else {
            int during_end = 0;
            int end = 1;
            for (int i = n - 1; i >= 0; --i) {
                if (a[i] == i + 1 && end) {
                    ++during_end;
                } else {
                    end = 0;
                }
            }
            int during_start = 0;
            int start = 1;
            for (int i = 0; i < n; ++i) {
                if (a[i] == i + 1 && start) {
                    ++during_start;
                } else {
                    start = 0;
                }
            }
            if ((during_start + during_end) == same) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
        
    }
    
}
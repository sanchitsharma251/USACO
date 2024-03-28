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

        int max_so_far = a[0];
        int time_so_far = 0;
        for (int i = 1; i < n; ++i) {
            if (a[i] < max_so_far) {
                time_so_far = max((int)ceil((float)log2(max_so_far - a[i] + 1)), time_so_far);
            } else {
                max_so_far = a[i];
            } 
        }
        cout << time_so_far << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    int A[n], B[m];
    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int i = 0; i < m; ++i) cin >> B[i];

    multiset<int> ms;
    for (int i = 0; i < n; ++i) ms.insert(A[i]);
    for (int i = 0; i < m; ++i) {
        auto low = ms.lower_bound(B[i]);
        if (*low == B[i]) {
            cout << B[i] << endl;
            ms.erase(low);
        } else {
            if (low == ms.begin()) {
                cout << -1 << endl;
            } else {
                --low;
                cout << *low << endl;
                ms.erase(low);
            }
        }
    } 
}

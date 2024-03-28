#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];
        ll B[n];
        for (int i = 0; i < n; ++i) cin >> B[i];
        
        // ll answer[n];
        // for (int i = 0; i < n; ++i) {
        //     answer[i] = 0;
        //     for (int j = i; j >= 0; --j) {
        //         answer[i] += min(B[i], A[j]);
        //         A[j] -= min(B[i], A[j]);
        //     }
        // }
        // for (auto x: answer) cout << x << " ";
        // cout << endl;
        
    }
 
}
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int A[n];
    int zeroes = 0;
    for (int i = 0; i < n; ++i) { 
        cin >> A[i]; 
        zeroes += (!A[i]);
    }
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
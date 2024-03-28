#include <bits/stdc++.h>
using namespace std;

int solve(int R[], int B[], int n, int m) {
    // Merge R and B together, such that the biggest elements are in the front
    int maxR = 0;
    int maxB = 0;
    int x = 0;
    int y = 0;
    for (int i = 1; i < n + 1; ++i) {
        x = x + R[i - 1];
        maxR = max(maxR, x);
    }
    for (int i = 1; i < m+1;++i){
        y=y+B[i-1];
        maxB=max(maxB,y);
    }
    return maxR+maxB;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        int R[n];
        for (int i = 0; i < n; ++i) cin >> R[i];
        cin >> m;
        int B[m];
        for (int i = 0; i < m; ++i) cin >> B[i];
        cout << solve(R, B, n, m) << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int solve(int n, int A[]) {
    sort(A, A + n);
    // Obviously, we can increase each element by an number k from 1 <= k <= n
    // The goal is try and make all the numbers the same frequency
    // We can try each permuation, which takes n! time, but n <= 2 * 10^5
    // Can we figure out a way to tell which number goes where?
    // 
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];
        solve(n, A); 
    }
}

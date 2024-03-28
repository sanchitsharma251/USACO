#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; ++i) {
        int n;
        cin >> n;

        int A[n];
        for (int i = 1; i < n + 1; ++i) A[i - 1] = i;

        if (n % 2 == 1 && n > 1) cout << -1 << endl;
        else {
            // Find a valid configuration for even permutations...
            // First number will always be n, no matter what the permutation is
        }
    }
}

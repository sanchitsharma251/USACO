#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        int maximumGCD = 1;
        for (int i = 1; i <= (int)sqrt(x); ++i) {
            if (x % i == 0) {
                if (x / i >= n) {
                    maximumGCD = max(maximumGCD, i);
                }
                if (i >= n) {
                    maximumGCD = max(maximumGCD, x / i);
                }
            }
        }
        cout << maximumGCD << endl;
    }
}
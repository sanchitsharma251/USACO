#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        for (int i = 0; i < n; ++i) a[i] = a[i] % 10;
        vector<int> digits(10, 0);
        for (int i = 0; i < n; ++i) {
            ++digits[a[i]];
        }

        int f = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                for (int k = 0; k < 10; ++k) {
                    if (((i + j + k) % 10) == 3) {
                        if (i != j && i != k && j != k) {
                            if (digits[i] >= 1 && digits[j] >= 1 && digits[k] >= 1) {
                                f = 1;
                            }
                        }
                        if (i != j && i != k && j == k) {
                            if (digits[j] >= 2 && digits[i] >= 1) {
                                f = 1;
                            }
                        }
                        if (j != i && j != k && i == k) {
                            if (digits[i] >= 2 && digits[j] >= 1) {
                                f = 1;
                            }
                        }
                        if (k != i && k != j && i == j) {
                            if (digits[i] >= 2 && digits[k] >= 1) {
                                f = 1;
                            }
                        }
                        if (i == j && j == k && i == k) {
                            if (digits[i] >= 3) {
                                f = 1;
                            }
                        } 
                    } 
                }
            }
        }
        
        cout << (f ? "YES" : "NO") << endl; 
    }
}

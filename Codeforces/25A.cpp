#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] %= 2;
    }

    int ones = 0;
    int zeroes = 0;
    for (int i = 0; i < n; ++i) {
        ones += (a[i] == 1);
        zeroes += (a[i] == 0);
    }

    if (ones > zeroes) {
        for (int i = 0; i < n; ++i) {
            if (a[i] == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (a[i] == 1) {
                cout << i + 1 << endl;
            }
        }
    }


}
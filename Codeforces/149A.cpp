#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    int months[12];

    cin >> k;
    for (int i = 0; i < 12; ++i) cin >> months[i];

    sort(months, months + 12, greater<int>());
    int f = 0;
    for (int i = 0; i < 12; ++i) {
        if (k <= 0) {
            cout << i << endl;
            f = 1;
            break;
        }
        k -= months[i];
    }
    if (!f && k != 0) cout << "-1" << endl;
    if (!f && k == 0) cout << "12" << endl;
}
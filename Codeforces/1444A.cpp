#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll p, q;
        cin >> p >> q;

        if (p % q == 0) {

            for (int i = 1; i <= (int)(sqrt(q)) + 1; ++i) {
                if (q % i != 0 && p % i == 0) {
                    cout << i << endl;
                    break; 
                }
            }
        } else {
            cout << p << endl;
        }
    }
}

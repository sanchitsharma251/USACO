#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long a, b, n, m;
        cin >> a >> b >> n >> m;
        if (n <= (a + b) - m && m <= min(a, b)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
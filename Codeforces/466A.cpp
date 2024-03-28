#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (b > m * a) {
        cout << n * a << endl;
    } else {
        int x = n / m;
        cout << b * x + min(a * (n % m), b) << endl;
    }  
}

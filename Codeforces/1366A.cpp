#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        int x=(a+b)/3;
        cout << min(min(a,b),x) << "\n";
    }
}

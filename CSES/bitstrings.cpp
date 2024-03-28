#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int s = 1;
    for (int i = 0; i < n; ++i) {
        s *= 2;
        s = s % (1000000007);
    }
    cout << s;
}
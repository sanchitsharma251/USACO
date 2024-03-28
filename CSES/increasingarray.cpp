#include <bits/stdc++.h>
using namespace std;


int main() {
    long long N;
    cin >> N;
    long long a[N] = {};
    long long moves = 0;
    for (int i = 0; i < N; ++i) {
        long long u;
        cin >> u;
        a[i] = u;
        if (i >= 1 && a[i - 1] > a[i]) {
            moves += a[i - 1] - a[i];
            a[i] = a[i - 1];
        } 
    }
    cout << moves << endl;
}
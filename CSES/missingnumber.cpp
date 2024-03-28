#include <bits/stdc++.h>
using namespace std;


int main() {
    long long N;
    cin >> N;
    vector<int> v(N, 0);
    for (long long i = 0; i < N - 1; ++i) {
        long long u;
        cin >> u;
        v[u - 1] = u;
    }
    for (long long i = 0; i < N; ++i) {
        if (v[i] == 0) cout << i + 1 << endl;
    }
}
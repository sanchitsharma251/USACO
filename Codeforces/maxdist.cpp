#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> x;
    vector<long long> y;
    for (int i = 0; i < N; ++i) {
        long long u;
        cin >> u;
        x.push_back(u);
    }
    for (int i = 0; i < N; ++i) {
        long long v;
        cin >> v;
        y.push_back(v);
    }
    long long maxdist = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            maxdist = max(maxdist, (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
        }
    }
    cout << maxdist;
}
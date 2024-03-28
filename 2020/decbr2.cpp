#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> petals = {};
    for (int i = 0; i < N; ++i) {
        int u;
        cin >> u;
        petals.push_back(u);
    }

    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int P = 1;
        int s = 0;
        for (int j = i; j < N; ++j) {
            s += petals[j];
            if (s % P == 0) {
                for (int k = i; k < j + 1; ++k) {
                    if ((int)(s / P) == petals[k]) {
                        ++ans;
                        break;
                    }
                }
            }
            ++P;
        }
    }
    cout << ans << endl;

}
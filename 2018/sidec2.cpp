#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int solve(vector<vector<int>> v, int n) {
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; ++i) {
        int a, t;
        cin >> a >> t;
        v[i] = {a, t, i};
    }
    cout << solve(v, n) << endl;
}

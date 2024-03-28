#include <bits/stdc++.h>
using namespace std;

void solve(int N, vector<vector<int>> d) {
    sort(d.begin(), d.end());
    long long answer = 0;
    long long minimum = 1000000000000;
    for (int i = 1; i < N; ++i) {
        long long aDiff = d[i][2] - d[i - 1][2];
        long long hDiff = d[i - 1][1] - d[i][1];
        if (aDiff >= 0 && hDiff <= 0) {
            cout << -1 << endl;
            return;
        }
        if (hDiff <= 0) {
            hDiff = abs(hDiff);
            aDiff = abs(aDiff);
            long long days = hDiff / aDiff;
            answer = max(answer, days + 1);
        }
        else if (hDiff > 0 && aDiff > 0) {
            long long days = hDiff / aDiff;
            minimum = min(minimum, days - (hDiff % aDiff == 0));
        }

    }
    if (answer <= minimum) {
        cout << answer << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        vector<vector<int>> d;
        for (int i = 0; i < N; ++i) {
            vector<int> r = {0, 0, 0};
            d.push_back(r);
        }
        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;
            d[i][1] = x;
        }
        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;
            d[i][2] = x;
        }
        for (int i = 0; i < N; ++i) {
            int x;
            cin >> x;
            d[i][0] = x;
        }
        solve(N, d);
    }
}

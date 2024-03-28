#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> times;
    for (int i = 0; i < n; ++i) {
        int startingTime, endingTime;
        cin >> startingTime >> endingTime;
        times.push_back({endingTime, startingTime});
    }

    sort(times.begin(), times.end());
    int ans = 0;
    int endingTime = 0;
    // 1 10
    // 2 8
    // 8 9
    for (int i = 0; i < n; ++i) {
        if (times[i].second >= endingTime) {
            ++ans;
            endingTime = times[i].first;
        }
    }

    cout << ans << endl;


}
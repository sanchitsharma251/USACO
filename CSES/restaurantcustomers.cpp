#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    int startingTimes[n];
    int endingTimes[n];
    for (int i = 0; i < n; ++i) {
        cin >> startingTimes[i] >> endingTimes[i];
    }
    sort(startingTimes, startingTimes + n);
    sort(endingTimes, endingTimes + n);

    int p1 = 0;
    int p2 = 0;
    int ans = 0;
    int curSum = 0;
    while (p1 < n && p2 < n) {
        if (startingTimes[p1] < endingTimes[p2]) {
            ++curSum;
            ++p1;
        } else {
            --curSum;
            ++p2;
        }
        ans = max(ans, curSum);
    }

    cout << ans << endl;

}
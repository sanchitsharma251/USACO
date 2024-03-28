#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int N;
    cin >> N;
    vector<pii> cows(N); 
    for (int i = 0; i < N; ++i) {
        cin >> cows[i].first >> cows[i].second; 
    }

    sort(cows.begin(), cows.end(), [](auto &left, auto &right) {
        return right.second > left.second;
    });

    int i = 0;
    int j = N - 1;
    int minimumTime = INT_MAX;
    while (j >= i) {
        --cows[i].second;
        --cows[j].second;
        if (cows[i].second == 0) ++i;
        if (cows[j].second == 0) --j;
        minimumTime = min(cows[i].second + cows[j].second, minimumTime);
    }
    cout << minimumTime << endl;
}

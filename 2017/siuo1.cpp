#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ifstream cin("pairup.in");
    ofstream cout("pairup.out");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
    int minimumTime = 0;
    while (j > i) {
        minimumTime = max(cows[i].second + cows[j].second, minimumTime);
        if (cows[i].first > cows[j].first) {
            cows[i].first -= cows[j].first;
            --j;
        }
        else if (cows[i].first < cows[j].first) {
            cows[j].first -= cows[i].first;
            ++i;
        } else {
            --j;
            ++i;
        }

    }
    cout << minimumTime << endl;
}




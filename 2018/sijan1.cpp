#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int N;
    cin >> N;
    vector<pii> lifeguards(N);
    for (int i = 0; i < N; ++i) cin >> lifeguards[i].first >> lifeguards[i].second;
    sort(lifeguards.begin(), lifeguards.end());
    set<int> s;
    
}

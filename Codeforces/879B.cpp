#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void processPlayers(int x, int y, deque<int> &dq) {
    dq.pop_front();
    dq.pop_front();
    dq.push_back(x);
    dq.push_front(y);    
}

int main() {
    ll n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    deque<int> dq;
    int streak = 1;
    for (int i = 0; i < n; ++i) dq.push_back(a[i]);

    if (a[0] > a[1]) {
        processPlayers(a[1], a[0], dq);
    } else {
        processPlayers(a[0], a[1], dq);
    }

    for (int i = 2; i < n; ++i) {
        if (streak >= k) break;
        if (a[i] > dq.front()) {
            int top = dq.front();
            processPlayers(top, a[i], dq);
            streak = 1; 
        } else {
            int top = dq.front();
            processPlayers(a[i], top, dq);
            ++streak;
        } 
    }
    cout << dq.front() << endl;
}

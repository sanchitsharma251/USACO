#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        deque<int> dq;
        for (int i = 0; i < n; ++i) dq.push_back(a[i]);
        dq.pop_front();
        int previous = a[0] + 1;
        int turn = 1;
        int alice = a[0];
        int bob = 0;
        int moves = 1;
        while (dq.size() > 0) {
            if (turn) {
                int sum = 0;
                while (sum < previous) {
                    sum += dq.back();
                    dq.pop_back();
                    if (dq.size() == 0) {
                        break;
                    }
                }
                bob += sum;
                previous = sum + 1;
            } else {
                int sum = 0;
                while (sum < previous) {
                    sum += dq.front();
                    dq.pop_front();
                    if (dq.size() == 0) {
                        break;
                    }
                }
                alice += sum;
                previous = sum + 1;
            }
            turn = !turn;
            ++moves;     
        }
        cout << moves << " " << alice << " " << bob << endl; 
    }
}

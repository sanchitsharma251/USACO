#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, int d, int A[], map<int, int> P) {
    // We can think of each element as starting an arth. seq
    
    // For a_i: 
    //  pos(a_i) > pos(a_(i + 1)) [False]
    //  pos(a_(i + 1)) > pos(a_i) + d [False]
    //  In this case, add 0 to answer
    
    // pos(a_i) < pos(a_(i + 1)) <= pos(a_i) + d
    // This means that this is a "not good" array
    // The value pos(a_i) + d always exists in p_i
    // There are two choices:
    //  First, trying to make pos(a_i) the bigger value
    //  In this case, precalcuate the shortest swaps
    //  Second, pos(a_(i + 1)) > pos(a_i) + d
    //  In this case, pos(a_i) < pos(a_(i + 1)) - d
    
    int pos[m];
    for (int i = 0; i < m; ++i) {
        pos[i] = P[A[i]];
    }

    int ans = 0;
    for (int i = 0; i < m - 1; ++i) {
        int x = pos[i];
        int y = pos[i + 1];
        if (y < x || y > x + d) {
            continue;
        } else {
            if (d < n - 1)
                ans += min(y - x, x + d - y);
            else
                ans += y - x;
        }
    }
    cout << ans << endl;

}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, m, d;
        cin >> n >> m >> d;
        int A[m];
        map<int, int> P; // (Value, Index)
        for (int j = 0; j < n; ++j) {
            int value;
            cin >> value;
            P[value] = j + 1;
        }
        for (int j = 0; j < m; ++j) cin >> A[j];
        solve(n, m, d, A, P);

    }
}
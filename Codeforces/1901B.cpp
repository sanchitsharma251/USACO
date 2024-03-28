#include <bits/stdc++.h>
using namespace std;

int solve(int n, int C[]) {
    // 1 2 2 1
    // Start off with 1
    // Move to 2, which won't work on one past(mark it)
    // Move to 2 again, which is the same(don't mark it)
    // Get back to 1
    // This is a total of 1 steps
    //
    // 1 0 1 0 1
    // Start with 1, we are good
    // Go to 0, teleportation required
    // 1 again, we are good
    // 0 teleportation required
    // 1 again, we are good
    // 2 steps
    //
    // 5 4 3 2 1
    // Start with 5, and mark it as 4
    // Look at 4, and mark it as covered
    // All the way until 1
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        if (C[i] < C[i + 1]) {
            answer += (C[i + 1] - 1);
        }
    }
    return answer ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int C[n + 1];
        C[0] = 0;
        for (int i = 1; i < n + 1; ++i) cin >> C[i];
        cout << solve(n, C) << endl;
    }
}

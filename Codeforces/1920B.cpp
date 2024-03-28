#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, k, x;
        cin >> n >> k >> x;
        int A[n];
        for (int j = 0; j < n; ++j) {
            cin >> A[j];
        }

        sort(A, A + n, greater<int>());

        int pre[n + 1];
        pre[0] = 0;
        for (int i = 1; i < n + 1; ++i) {
            pre[i] = pre[i - 1] + A[i - 1];
        }

        int answer = -1e9;
        for (int i = 0; i <= k; ++i) {
            answer = max(answer, pre[n] + pre[i] - 2 * pre[min(i + x, n)]);
        }
        cout << answer << endl; 

    }
}

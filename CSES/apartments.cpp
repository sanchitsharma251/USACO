#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int n, m, k;
    cin >> n >> m >> k;
    int A[n];
    for (int i = 0; i < n; ++i) cin >> A[i];
    int B[m];
    for (int i = 0; i < m; ++i) cin >> B[i];
 
    sort(A, A + n);
    sort(B, B + m);
    // for (int i = 0; i < n; ++i) cout << A[i] << " ";
    // cout << endl;
    // for (int i = 0; i < m; ++i) cout << B[i] << " ";
    // cout << endl;
    int p1 = 0;
    int p2 = 0;
    int answer = 0;
    while (p1 < n && p2 < m) {
        if (B[p2] - k <= A[p1] && A[p1] <= B[p2] + k) {
            ++p1;
            ++p2;
            ++answer;
        } else {
            int temp1 = p1;
            int temp2 = p2;

            p2 += (A[temp1] > B[temp2]);
            p1 += (A[temp1] < B[temp2]);
        }
    }
    cout << answer << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; ++i) cin >> A[i];
        sort(A, A + N);
        // 6 0 3 3 6 7 2 7
        // 0 2 3 3 6 6 7 7
        // 0 0 3 3 3
        //  
        int answer = 0;
        for (int i = 0; i < N - 1; ++i) {
            if (A[i] + 1 <= i + 1 && A[i + 1] > i + 1) {
                ++answer;
            }
        }
        cout << answer << endl;
    }
}

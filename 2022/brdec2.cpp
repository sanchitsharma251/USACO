#include <bits/stdc++.h>
using namespace std;

void solve(int N, int K, string S) {
    // To decrease time complexity
    // Use a sliding window approach
    char A[N];
    for (int i = 0; i < N; ++i) A[i] = '.';
    int answer = 0;
    for (int i = 0; i < N; ++i) {
        char c = S[i];
        int found = 0;
        for (int j = 0; j < N; ++j) {
            if (i - K <= j && j <= i + K) {
                if (c == A[j]) {
                    found = 1;
                }
            }
        }
        if (!found) {
            if (i + K < N) { 
                A[i + K] = c; 
            } else {
                for (int j = N - 1; j >= 0; --j) {
                    if (A[j] == '.') { A[j] = c; break; }
                }
            }
            ++answer;
        }
    }
    
    cout << answer << endl;
    for (auto x: A) cout << x;
    cout << endl;

}


int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int N, K;
        string S;
        cin >> N >> K >> S;
        solve(N, K, S);
    }
}
#include <bits/stdc++.h>
using namespace std;



int main() {
    int N, K;
    int A[N];
    map<int, vector<int>> T;

    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];
    cin >> K;
    for (int i = 0; i < K; ++i) {
        int L, M;
        cin >> L >> M;
        vector<int> metals;
        for (int j = 0; j < M; ++j) {
            int x;
            cin >> x;
            metals.push_back(x);
        }
        T[L] = metals;
    }

    for (int i = N - 1; i >= 0; ++i) {
        
    }

    cout << A[N - 1] << endl;

}
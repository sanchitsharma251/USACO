#include <bits/stdc++.h>
using namespace std;

int findT(int K, int A[], int N) {
    int lastTime = 0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for (int i = 0; i < N; ++i) {
        if (pq.size() == K) {
            lastTime = pq.top();
            pq.pop();
        }
        pq.push(lastTime + A[i]);
    }
    while (pq.size() > 1) {
        pq.pop();
    }
    return pq.top();
}

int main() {
    ifstream cin("cowdance.in");
    ofstream cout("cowdance.out");
    int N;
    cin >> N;
    int TMAX;
    cin >> TMAX;
    int A[N];
    for (int i = 0; i < N; ++i) cin >> A[i];


    int lo = 0;
    int hi = N - 1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        // mid is the value of K, compute T for this
        int T = findT(mid, A, N);
        if (T > TMAX) {
            lo = mid + 1;
        } else if (T < TMAX) {
            hi = mid;
        }
    }
    cout << lo;
    
}
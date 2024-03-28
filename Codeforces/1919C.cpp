#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000005;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];
        
        vector<int> B;
        vector<int> C;
        int t1 = INF;
        int t2 = INF;
        for (int i = 0; i < n; ++i) {
            if (B.size() == 0 && C.size() == 0) {
                t1 = A[i];
                B.push_back(t1);
            } else if (C.size() == 0) {
                if (A[i] > t1) {
                    t2 = A[i];
                    C.push_back(t2); 
                } else {
                    t1 = A[i];
                    B.push_back(t1);
                }
            } else {
                if (A[i] > t1 && A[i] > t2) {
                    if (t1 > t2) {
                        t2 = A[i]; 
                        C.push_back(t2);    
                    } else {
                        t1 = A[i];
                        B.push_back(t1);
                    } 
                } else if (A[i] > t1 && A[i] <= t2) {
                    t2 = A[i];
                    C.push_back(t2);
                } else if (A[i] > t2 && A[i] <= t1) {
                    t1 = A[i];
                    B.push_back(t1);
                } else if (A[i] <= t2 && A[i] <= t1) {
                    if (t2 < t1) {
                        t2 = A[i];
                        C.push_back(t2);
                    } else {
                        t1 = A[i];
                        B.push_back(t1);
                    }
                } 
            } 
        }
        int answer = 0;
        if (B.size() > 0) {
            for (int i = 0; i < B.size() - 1; ++i) {
                if (B[i] < B[i + 1]) {
                    ++answer;
                }
            }
        }
        if (C.size() > 0) {
            for (int i = 0; i < C.size() - 1; ++i) {
                if (C[i] < C[i + 1]) {
                    ++answer;
                }
            }
        }
        cout << answer << endl;
    }
}

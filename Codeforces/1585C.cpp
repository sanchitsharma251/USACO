#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

void solve(int n, int k, int A[]) {
    std::vector<int> P;
    std::vector<int> N;
    for (int i = 0; i < n; ++i) {
        if (A[i] > 0) P.push_back(A[i]);
        else N.push_back(-A[i]);
    }
    


}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, k;
        std::cin >> n >> k;
        int A[n];
        for (int j = 0; j < n; ++j) std::cin >> A[j];
        solve(n, k, A);
    }
}
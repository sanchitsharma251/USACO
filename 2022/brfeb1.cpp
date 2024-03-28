#include <bits/stdc++.h>
using namespace std;


int solve(int N, vector<int> a) {
    int sum = 0;
    for (int i = 0; i < N; ++i) sum += a[i];
    int mi = 1000001;
    for (int i = 1; i <= sum; ++i) {
        int curMi = 0;
        int curSum = a[0];
        bool flag = false;
        if (sum % i != 0) continue;
        int target = floor(sum / i);
        for (int j = 1; j < N; ++j) {
            if (curSum > target) { flag = true; break; }
            else if (curSum == target) { curSum = a[j]; }
            else { curSum += a[j]; ++curMi; }
        }
        if (!flag) mi = min(mi, curMi);
    }
    if (sum == 0) return 0;
    return mi;
}


int main() {
    int T;
    cin >> T;
    vector<int> answers;
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        vector<int> a;
        for (int j = 0; j < N; ++j) {
            int u;
            cin >> u;
            a.push_back(u);
        } 

        answers.push_back(solve(N, a));
    }
    for (int i = 0; i < answers.size(); ++i) {
        cout << answers[i] << endl;
    }
}
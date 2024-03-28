#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; ++i) cin >> A[i];
        
        for (int i = 0; i < n; ++i) {
            A[i] = A[i] % k;
        }
        map<int, vector<int>, greater<int>> mp;
        for (int i = 0; i < n; ++i) {
            mp[A[i]].push_back(i + 1);
        }

        vector<int> answer;
        if (mp.find(0) != mp.end()) {
            for (int i = 0; i < mp[0].size(); ++i) {
                answer.push_back(mp[0][i]);
            }
        }
        for (auto x: mp) {
            if (x.first == 0) continue;
            else {
                for (int y = 0; y < x.second.size(); ++y) {
                    answer.push_back(x.second[y]);
                }
            }
        }
        for (int i = 0; i < answer.size() - 1; ++i) {
            cout << answer[i] << " ";
        }
        cout << answer[answer.size() - 1] << endl;
    }
}
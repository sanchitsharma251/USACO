#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    for (long long i = 0; i < t; ++i) {
        long long n;
        cin >> n;
        long long answer = 0;
        map<long long, vector<long long>> A;
        for (long long j = 0; j < n; ++j) {
            long long key, value;
            cin >> key >> value;
            A[key].push_back(value);
        }
        for (auto &p: A) {
            sort(p.second.begin(), p.second.end(), greater<long long>());
            for (long long j = 0; j < p.first; ++j) {
                if (j >= p.second.size()) break;
                answer += p.second[j];
            }
        }
        cout << answer << endl;
    }
}
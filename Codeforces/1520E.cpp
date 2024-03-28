#include <bits/stdc++.h>
using namespace std;

long long nC2(long long n) {

    return n * (n - 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<long long> b;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '*') {
                b.push_back(i + 1);
            }
        }

        long long k = b.size();
        if (k <= 1) {
            cout << 0 << endl;
            continue;
        }

        vector<long long> pre;
        pre.push_back(0);
        for (int i = 1; i < b.size() + 1; ++i) pre.push_back(pre[i - 1] + b[i - 1]);
        pre.push_back(0);
        
        long long ans = 1e18;
        for (int i = 1; i < b.size(); ++i) {
            ans = min(ans, pre[k] - pre[i] - pre[i - 1] + b[i - 1] * (i - 1) - b[i - 1] * (k - i) - k + 1 - nC2(i - 1) - nC2(k - i)); 
        } 

        cout << ans << endl;
    }
}

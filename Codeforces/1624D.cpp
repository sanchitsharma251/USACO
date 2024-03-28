#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        map<int, int> chars;
        for (int i = 0; i < n; ++i) {
            ++chars[s[i]];
        }
        
        // Keep adding pairs of characters...
        int pairs = 0;
        for (auto x: chars) {
            pairs += x / 2;
        }

    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin >> s;
    int N = s.size();
    int mx = 1;
    int rep = 1;
    for (int i = 0; i < N - 1; ++i) {
        if (s[i] == s[i + 1]) {
            ++rep;
            mx = max(rep, mx);
        } else {
            rep = 1;
        }
    }
    cout << mx << endl;

}
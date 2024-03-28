#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i) cin >> A[i];

    set<int> s;
    for (int i = 0; i < n; ++i) {
        s.insert(A[i]);
    }
    cout << s.size() << endl;
}
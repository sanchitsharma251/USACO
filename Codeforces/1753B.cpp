#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num != x) a.push_back(num);
    }

    if (a.size() < x) cout << "No" << endl;
    else {
        // Let's play a game of combining factorials...
    } 
}

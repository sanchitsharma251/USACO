#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("buckets.in");
    ofstream fout("buckets.out");

    pair<int, int> B;
    pair<int, int> L;
    pair<int, int> R;
    for (int i = 0; i < 10; ++i) {
        string s;
        fin >> s;
        for (int j = 0; j < 10; ++j) {
            if (s[j] == 'B') {
                B = {i, j};
            }
            if (s[j] == 'R') {
                R = {i, j};
            }
            if (s[j] == 'L') {
                L = {i, j};
            }
        }
    }


    int ans;
    if (L.first == B.first || L.second == B.second) {
        if (((L.first < R.first && R.first < B.first) || (B.first < R.first && R.first < L.first)) && (R.second == L.second && R.second == B.second)) {
            ans = abs(B.first - L.first) + 1;
        }
        else if (((L.second < R.second && R.second < B.second) || (B.second < R.second && R.second < L.second)) && (R.first == L.first && R.first == B.first)) {
            ans = abs(B.second - L.second) + 1;
        }
        else {
            ans = abs(B.second - L.second) + abs(B.first - L.first) - 1;
        }
    } else {
        ans = abs(B.second - L.second) + abs(B.first - L.first) - 1;
    }


    fout << ans;
}
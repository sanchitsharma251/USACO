#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("highcard.in");
    ofstream fout("highcard.out");

    int N;
    fin >> N;
    set<int> e;
    for (int i = 0; i < N; ++i) {
        int card; fin >> card;
        e.insert(card);
    }

    set<int> b;
    for (int i = 1; i < 2 * N + 1; ++i) {
        if (e.count(i) == 0) {
            b.insert(i);
        }
    }

    int ans = 0;
    for (int card : e) {
        auto it = b.upper_bound(card);
        if (*it > card) {
            ++ans;
            b.erase(*it);
        }
    }
    fout << ans;
}
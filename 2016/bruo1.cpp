#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("diamond.in");
    ofstream fout("diamond.out");
    int N, K;
    fin >> N >> K;
    vector<int> diamonds = {};
    for (int i = 0; i < N; ++i) {
        int u;
        fin >> u;
        diamonds.push_back(u);
    }
    // 1 1 3 4 6
    sort(diamonds.begin(), diamonds.end());
    int answer = 0;
    for (int i = 0; i < N; ++i) {
        int cmin = 1;
        for (int j = i + 1; j < N; ++j) {
            if (diamonds[j] - diamonds[i] <= K) {
                ++cmin;
            }
        }
        answer = max(answer, cmin);
    }
    fout << answer;
}
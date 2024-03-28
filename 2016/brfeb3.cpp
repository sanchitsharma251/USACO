#include <bits/stdc++.h>
using namespace std;

void solve(int N, int B, vector<pair<int,int>> coordinates) {
    ofstream fout("balancing.out");
    int answer = 1000000;
    for (int i = 0; i < B; i += 2) {
        for (int j = 0; j < B; j += 2) {
            int ur = 0;
            int lr = 0;
            int ul = 0;
            int ll = 0;
            for (int k = 0; k < N; ++k) {
                int x = coordinates[k].first;
                int y = coordinates[k].second;

                if (x > i && y > j) ++ur;
            }
            for (int k = 0; k < N; ++k) {
                int x = coordinates[k].first;
                int y = coordinates[k].second;

                if (x < i && y > j) ++ul;
            }
            for (int k = 0; k < N; ++k) {
                int x = coordinates[k].first;
                int y = coordinates[k].second;

                if (x < i && y < j) ++ll;
            }
            lr = N - ll - ur - ul;
            answer = min(answer, max(ur, max(ul, max(ll, lr))));
        }
    }
    fout << answer;
}

int main() {
    ifstream fin("balancing.in");
    int N, B;
    fin >> N >> B;
    vector<pair<int,int>> coordinates(N);
    for (int i = 0; i < N; ++i) {
        fin >> coordinates[i].first >> coordinates[i].second;
    }
    solve(N, B, coordinates);
}
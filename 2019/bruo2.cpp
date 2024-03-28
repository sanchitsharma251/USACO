#include <bits/stdc++.h>
using namespace std;

void dfs(int startingStation, int endingStation, vector<vector<int>> adj, int &valid) {
    if (startingStation == endingStation) { ++valid; return; }
    else {
        for (auto neighbor: adj[startingStation]) {
            dfs(neighbor, endingStation, adj, valid);
        }
    }
}


int main() {
    ifstream fin("factory.in");
    ofstream fout("factory.out");
    int N;
    fin >> N;
    vector<vector<int>> adj(N);

    for (int i = 0; i < N - 1; ++i) {
        int u, v;
        fin >> u >> v;
        adj[u - 1].push_back(v - 1);
    }

    int found = 0;
    for (int i = 0; i < N; ++i) {
        int valid = 0;
        for (int j = 0; j < N; ++j) {
            if (i != j) {
                dfs(j, i, adj, valid);
            }
        }
        if (valid == N - 1) { fout << i + 1; found = 1;}
    }
    if (!found) fout << -1;
}
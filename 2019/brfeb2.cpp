#include <bits/stdc++.h>
using namespace std;

int main()
{

    ifstream fin("revegetate.in");
    ofstream fout("revegetate.out");

    int N, M;
    fin >> N >> M;

    int answer[N] = {0};
    answer[0] = 1;

    vector<int> adj[M];
    for (int i = 0; i < M; ++i) {
        int u, v;
        fin >> u >> v;
        adj[i] = {u, v};
    }

    for (int i = 1; i < N + 1; ++i) {
        bool marked[4] = {0};
        for (int j = 0; j < M; ++j) {
            if (adj[j][0] == i + 1) {
                if (adj[j][1] > 0 && answer[adj[j][1] - 1] - 1 >= 0)
                    marked[answer[adj[j][1] - 1] - 1] = 1;
            }
            if (adj[j][1] == i + 1)
            {
                if (adj[j][0] > 0 && answer[adj[j][0] - 1] - 1 >= 0)
                    marked[answer[adj[j][0] - 1] - 1] = 1;
            }
        }
        for (int j = 0; j < 4; ++j) {
            if (marked[j] == 0){
                answer[i] = j + 1;
                break;
            }
        }
    }

    for (auto x : answer) {
        fout << x;
    }
}
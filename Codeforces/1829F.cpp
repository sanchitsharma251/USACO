#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            adj[v].push_back(u);
            adj[u].push_back(v);
        }

        vector<int> adjSize;
        for (int i = 1; i <= n; ++i) {
            if (adj[i].size() == 0) {
                continue;
            } else {
                adjSize.push_back(adj[i].size());
            }
        }
        map<int, int> mp;
        for (auto e: adjSize) {
            ++mp[e];
        }
        int x, y;
        for (auto e: mp) {
            if (e.second == 1) x = e.first;
            else y = e.first - 1;
        }
        cout << x << " " << y << endl; 
    }
}
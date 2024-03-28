#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, map<int, int> adj) {
    if (adj[adj[adj[node]]] == node) return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    map<int, int> adj;
    for (int i = 0; i < n; ++i) {
        adj[a[i]] = a[a[i] - 1];
    }

    for (auto x: adj) {
        if (dfs(x.first, adj)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl; 
}
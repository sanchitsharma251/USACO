#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5;
const int maxM = 1e5;

struct Cow {
  char type;
  int pasture1;
  int pasture2;
};

int N, M;
vector<vector<int>> adj(maxN + 4);
vector<bool> visited(maxN + 4);

void dfs(int node) {
  if (visited[node]) return;
  visited[node] = true;
  
  for (auto neighbor: adj[node]) {
    if (!visited[neighbor]) {
      dfs(neighbor);
    }
  }
}

int main() {
  freopen("revegetate.in", "r", stdin);
  freopen("revegetate.out", "w", stdout);

  cin >> N >> M;
  for (int i = 0; i < M; i++) {
    char c;
    int u, v;
    cin >> c >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int num_of_connected_components = 0;
  for (int i = 1; i < N; ++i) {
    if (!visited[i]) {
      ++num_of_connected_components;
      dfs(i);
    }
  }
 
  cout << 1;
  for (int i = 1; i <= num_of_connected_components; i++) {
    cout << 0;
  }
}


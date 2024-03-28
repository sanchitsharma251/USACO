#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> adj(n);


bool dfs(int node, vector<bool> &visited){

}

int main(){
    cin>>n>>m;

    for(int i=0;i<m;++i){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v); 
    }

    // DFS on each node
    vector<bool> visited;
    for(int i=0;i<n;++i){
       int x;
       cin>>x;
       visited[x]=1; 
    }

}

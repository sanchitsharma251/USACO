#include <bits/stdc++.h>
using namespace std;

int solve(int n,int a[]){
    int ans=0;
    long long hp=0;
    priority_queue<int> pq;
    for(int i=0;i<n;++i){
        hp+=a[i];
        ++ans;
        if(a[i]<0){
            pq.push(-a[i]);
        }
        if(hp<0){
            hp+=(pq.top());
            pq.pop(); 
            --ans;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i) cin>>a[i];
    cout<<solve(n,a)<<endl;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n,q;
    cin>>n>>q;
    ll A[n];
    for (int i=0;i<n;++i) cin>>A[i];
    sort(A,A+n,greater<ll>());
    ll pre[n+1];
    pre[0]=0;
    for (int i=1;i<n+1;++i) pre[i]=pre[i-1]+A[i-1];
    for (int i=0;i<q;++i) {
        int x,y;
        cin>>x>>y;
        cout<<pre[x]-pre[x-y]<<"\n";
    }

}
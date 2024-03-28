#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];
    sort(A,A+n);
    ll pre[n];
    pre[0]=A[0];
    for(int i=1;i<n;++i) pre[i]=pre[i-1]+A[i];
    ll answer=10e17;
    for(ll i=0;i<n;++i){
       answer=min(answer,A[i]*(i+1)-pre[i]+(pre[n-1]-pre[i])-A[i]*(n-i-1)); 
    }
    cout<<answer<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int solve(int n,int x,int a[]){
    sort(a,a+n);
    int b=1;
    int ans=0;
    for(int i=n-1;i>=0;--i){
        if(a[i]*b>=x){
            b=1;
            ++ans;
        }else{
            ++b;
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        int a[n];
        for(int i=0;i<n;++i) cin>>a[i];

        cout<<solve(n,x,a)<<"\n";
    }
}

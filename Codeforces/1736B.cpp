#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i) cin>>a[i];
        
        int b[n-1];
        for(int i=0;i<n-1;++i){
            b[i]=a[i]*a[i+1]/(__gcd(a[i],a[i+1]));
        }

        int ans=1;
        for(int i=0;i<n-2;++i){
            if(gcd(b[i],b[i+1])!=a[i+1]){
                ans=0;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

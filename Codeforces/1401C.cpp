#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mn=INT_MAX;
        for(int i=0;i<n;++i) {
            cin>>a[i];
            mn=min(mn,a[i]); 
        }

        int b[n];
        for(int i=0;i<n;++i) b[i]=a[i];
        sort(a,a+n);
        
        int ans=1;
        for(int i=0;i<n;++i){
            if(a[i]!=b[i]&&__gcd(a[i],mn)!=mn&&mn>1){
                ans=0;
            }
        }

        cout<<(ans?"YES":"NO")<<endl;
        
 
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i) cin>>a[i];
        
        sort(a,a+n);

        if(n%2==0) cout<<n/2-1<<"\n";
        else cout<<(n-1)/2<<"\n";

        for(int i=0;i<n-1;i+=2){
            swap(a[i],a[i+1]);
        }

        for(int i=0;i<n;++i) cout<<a[i]<<" ";
        cout<<"\n";
}

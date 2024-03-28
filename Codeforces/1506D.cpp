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

        map<int,int> mp;
        for(int i=0;i<n;++i) ++mp[a[i]];
       
        int ans=0;
        int half=n/2;
        int fnd=0;
        for(auto x:mp){
            if(x.second>half){
                fnd=1;
            }
        }
        if(fnd){
            for(auto x:mp){
                if(x.second>half){
                    ans+=x.second;
                }else{
                    ans-=x.second;
                }
            }
        }else{
            ans+=(n%2==1);
        }
        cout<<ans<<endl;
    }
}

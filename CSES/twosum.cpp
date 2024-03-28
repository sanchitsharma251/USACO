#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];
    map<int,int> mp;
    int fnd=0;
    for(int i=0;i<n;++i){
        if(mp.find(x-A[i])!=mp.end()){
            cout<<mp[x-A[i]]+1<<" "<<i+1<<endl;
            fnd=1;
            break;
        }else{
            mp[A[i]]=i;
        }
    }
    if(!fnd)cout<<"IMPOSSIBLE"<<endl;
    
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i) cin>>a[i];

    set<int> st; // Keeps track of elements which have been removed already
    multiset<pair<int,int>> ms; // Keeps track of elements
    for(int i=0;i<n;++i) ms.insert({a[i],i});

    int ans=0;
    int j=0; 
    for(int i=0;i<n/2;++i){
        //first william's turn where he'll take the largest integer(ie ms.end())
        ans+=((*(--ms.end())).first);
        st.insert((*(--ms.end())).second);
        ms.erase(--ms.end());
        //now the robots move
        //he takes the left hand side
        while(st.find(j)!=st.end()){
            ms.erase({a[j],j}); 
            ++j;
        }
        st.insert(j);  
        ms.erase({a[j],j});
        cout<<ans<<endl;
    }
    cout<<ans<<endl;
}

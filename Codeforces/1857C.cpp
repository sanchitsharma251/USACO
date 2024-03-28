#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int length=n*(n-1)/2;
        int B[length];
        for(int i=0;i<length;++i) cin>>B[i];
        sort(B,B+length);
        vector<int> ans; 
        int k=n-1;
        int i=0;
        while(i<length){
            ans.push_back(B[i]);
            i+=k;
            --k;
        }
        ans.push_back(B[length-1]);
        for(int i=0;i<ans.size()-1;++i){
            cout<<ans[i]<<" ";
        }
        cout<<ans[ans.size()-1]<<endl;
    }
}

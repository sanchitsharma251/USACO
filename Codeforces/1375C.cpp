#include <bits/stdc++.h>
using namespace std;

bool solve(int n,int a[]){
    return a[n-1]>a[0];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i) cin>>a[i];

        cout<<(solve(n,a)?"YES":"NO")<<endl;
    }
}

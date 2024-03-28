#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];
    sort(A,A+n);
    ll sum=0;
    int fnd=0;
    for(int i=0;i<n;++i){
        if(A[i]-sum<=1){
            sum+=A[i];
        }else{
            cout<<sum+1<<endl;
            fnd=1;
            break;
        }
    }
    if(!fnd) cout<<sum+1<<endl;
}

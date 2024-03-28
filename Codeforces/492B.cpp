#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];

    sort(A,A+n);
    double answer=0;
    if(A[0]==0&&A[n-1]==l){
        for(int i=0;i<n-1;++i){
            answer=max(answer,(A[i+1]-A[i])/2.0); 
        }
    }else if(A[0]==0){
        for(int i=0;i<n-1;++i){
            answer=max(answer,(A[i+1]-A[i])/2.0);
        }
        answer=max(answer,(double)l-A[n-1]);
    }else if(A[n-1]==l){
        for(int i=0;i<n-1;++i){
            answer=max(answer,(A[i+1]-A[i])/2.0);
        }
        answer=max(answer,(double)A[0]);
    }else{
        for(int i=0;i<n-1;++i){
            answer=max(answer,(A[i+1]-A[i])/2.0);
        }
        answer=max(answer,(double)A[0]);
        answer=max(answer,(double)l-A[n-1]);
    }
    cout<<setprecision(9);
    cout<<answer<<endl;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];

    int B[n+1];
    for(int i=1;i<n+1;++i) B[A[i-1]]=i;

    int answer=1;
    for(int i=1;i<n;++i){
        answer+=(B[i]>B[i+1]); 
    }
    cout<<answer<<endl;
}

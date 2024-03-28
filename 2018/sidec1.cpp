#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(int A[],int N,int M,int C,ll mx){
   int s=0;
   int b=1;
   int j=0;
   for(int i=0;i<N;++i){
       if(A[i]-A[j]<=mx){
           if(s==C){
               s=1;
               ++b;
               j=i;
               continue;
           }
           ++s;
       } else {
           s=1;
           ++b;
           j=i;
       }
   }
   return b<=M; 
}

void solve(int A[],int N,int M,int C){
    ofstream cout("convention.out");
    sort(A,A+N);
    ll lo=0;
    ll hi=1000000005;
    while(lo<=hi){
        ll mid=hi+(lo-hi)/2;
        if(check(A,N,M,C,mid)){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    cout<<lo<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream cin("convention.in");
    int N,M,C;
    cin>>N>>M>>C;
    int A[N];
    for(int i=0;i<N;++i) cin>>A[i];
    solve(A,N,M,C);
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int digits(ll n){
    return floor(log10(n)+1);
}

int trailingZeroes(ll n) {
    string s=to_string(n);
    int answer=0;
    for(int i=s.size()-1;i>=0;--i){
        if(s[i]=='0'){
            ++answer;
        } else {
            break;
        }
    }
    return answer;
}

vector<int> build(ll A[],int n){
    vector<int> B(n);
    for(int i=0;i<n;++i){ 
        B[i]=trailingZeroes(A[i]);
    }
    sort(B.begin(),B.end(),greater<int>());
    return B;
}

bool solve(ll A[],int n, int m){
    // Anna will not be able to change the power of 10, no matter what she does
    // UNLESS THERE ARE TRAILING ZEROES
    // For example in the array 1 2 3 4
    // 4 has 3 trailing zeroes, which means that we can mark it as changed
    vector<int> B=build(A,n);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll A[n];
        for(int i=0;i<n;++i) cin>>A[i];
        cout<<(solve(A,n,m)?"Sasha":"Anna")<<endl; 
    }
}

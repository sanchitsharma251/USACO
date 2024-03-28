#include <bits/stdc++.h>
using namespace std;

long long nc2(long long n) {
    return n*(n-1)/2; 
}

int main() {
    long long n,m;
    cin>>n>>m;
    long long d=n/m;
    cout<<(nc2(d))*m+(n%m)*d<<" "<<nc2(n-m+1)<<"\n";
}

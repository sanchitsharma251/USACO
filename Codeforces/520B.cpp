#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    if(n>=m){
        cout<<n-m<<endl;
    }else{
        int x=ceil(log2(m)-log2(n));
        cout<<x+n*pow(2,x)-m<<endl;
    } 
}

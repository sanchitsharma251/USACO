#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ll r,g,b;
    cin>>r>>g>>b;
    
    int fnd=0;
    if(r==g&&g==r&&r==b) cout<<r;
    
    if(r==g&&r!=b){
        if(r<b) cout<<r+(int)floor((g+b-2*r)/3.0);
        else cout<<b+(int)floor((r+g-2*b)/3.0);
        fnd=1;
    }
 
    if(r==b&&r!=g){
        if(r<g) cout<<r+(int)floor((g+b-2*r)/3.0);
        else cout<<g+(int)floor((r+b-2*g)/3.0);
        fnd=1;
    }
 
    if(b==g&&r!=b){
        if(r>b) cout<<b+(int)floor((r+b-2*g)/3.0);
        else cout<<r+(int)floor((b+g-2*r)/3.0);
        fnd=1;
    }
 
    if(r<g&&r<b&&!fnd){
        cout<<min(min(r+(b+g-2*r)/3,b),g);
    }else if(b<r&&b<g&&!fnd){
        cout<<min(min(b+(g+r-2*b)/3,g),r);
    }else if(g<r&&g<b&&!fnd){
        cout<<min(min(g+(r+b-2*g)/3,r),b);
    } 
}

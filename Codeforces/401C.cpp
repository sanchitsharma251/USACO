#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
   
    if (n>=(m+1)||m>2*(n+1)) cout << -1;
        if(m==n){
            for(int i=0;i<m+n;++i){
                if(i%2==0){
                    cout<<1;
                }else{
                    cout<<0;
                }
            }
        }else if(m==n-1){
            for(int i=0;i<m+n;++i){
                if(i%2==0){
                    cout<<0;
                }else{
                    cout<<1;
i               }
            } 
        }else{
             
        }
    }
}

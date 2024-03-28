#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h,c,t;
        cin>>h>>c>>t;
        int e=(h+c)/2;
        if(t<=e){
            cout<<2<<endl;
            continue;
        }else{
            // find the first value such that h-c/2k is greater than h+c/2
            int target=t-e;
            int lo=0;
            int hi=1e9;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(((h-c)/(2*k))>=((h-c)/(2*k))){
                                    
                }
            }
        }
    }
}

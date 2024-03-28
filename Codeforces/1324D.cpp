#include <bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x)
{
    int i = upper_bound(arr, arr + n, x) - arr;
    return i;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i) cin>>a[i];
    int b[n];
    for(int i=0;i<n;++i) cin>>b[i];

    int c[n];
    for(int i=0;i<n;++i) c[i]=a[i]-b[i];

    int d[n];
    for(int i=0;i<n;++i) d[i]=b[i]-a[i];

    sort(d,d+n);
    int p=0;
    for(int i=0;i<n;++i) p+=(c[i]>0);
    
    map<int,int> mp;
    for(int i=0;i<n;++i) ++mp[d[i]];

    long long ans=0;
    for(int i=0;i<n;++i) ans+=(countOfElements(d,n,c[i])-mp[c[i]]);
    cout<<(ans-p)/2<<endl; 

}

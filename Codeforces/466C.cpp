#include <bits/stdc++.h>
using namespace std;

int countOfElements(vector<int> arr, int x)
{
    int i = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
    return i;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    long long pre[n];
    for(int i=0;i<n;++i) {
        cin>>a[i];
        sum+=a[i];
        if(i==0) pre[i]=a[i];
        else pre[i]=pre[i-1]+a[i];
    }

    if(sum%3!=0){
        cout<<0<<endl;
        return 0;
    }

    long long suf[n];
    suf[n-1]=a[n-1];
    for(int i=n-2;i>=0;--i) suf[i]=suf[i+1]+a[i];
    
    long long c1=0;
    long long c2=0;
    vector<int> c1p;
    vector<int> c2p;
    for(int i=0;i<n;++i){
        if(pre[i]==sum/3&&(i!=(n-1))){
            ++c1;
            c1p.push_back(i);
        }
        if(suf[i]==sum/3&&(i>0)){
            ++c2;
            c2p.push_back(i-1);
        }
    }
    long long ans=c1*c2;
    long long invalid=0;
    for(int i=0;i<c1p.size();++i){
        invalid+=countOfElements(c2p,c1p[i]);
    }
    cout<<ans-invalid<<endl;

}

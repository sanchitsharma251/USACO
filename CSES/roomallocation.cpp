#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main(){
    int n;
    cin>>n;
    vector<pii> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    multiset<int> ms;
    ms.insert(v[0].second);
    int answer=1;
    for(int i=1;i<n;++i){
       int b=*ms.begin();
       if(v[i].first>b){
           ms.erase(ms.find(b));
           ms.insert(v[i].second);
       }else{
           ms.insert(v[i].second);
           ++answer;
       }
    }
    cout<<answer<<endl;
}

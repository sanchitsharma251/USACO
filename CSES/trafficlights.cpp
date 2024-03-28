#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n;
    cin>>x>>n;
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];

    set<int> s;
    multiset<int> ms;
    ms.insert(x);
    s.insert(0);
    s.insert(x);
    vector<int> answer;
    for(int i=0;i<n;++i){
        s.insert(A[i]);
        int l=*s.upper_bound(A[i]);
        int t=*(--s.lower_bound(A[i]));
        ms.erase(ms.find(l-t));
        ms.insert(l-A[i]);
        ms.insert(A[i]-t);
        answer.push_back(*(--ms.end()));
    }
    for(int i=0;i<answer.size()-1;++i)cout<<answer[i]<<" ";
    cout<<answer[answer.size()-1]<<endl;
}

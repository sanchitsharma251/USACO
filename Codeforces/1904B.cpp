#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        pair<int,int> A[n];
        for (int i=0;i<n;++i){
            int x;
            cin>>x;
            A[i]={x, i};
        }    
        sort(A,A+n);
        long long pre[n];
        pre[0]=A[0].first;
        for (int i=1;i<n;++i) pre[i]=pre[i-1]+A[i].first;
        vector<int> answers(n);
        long long j = 0;
        for (long long i=0;i<n;++i){
            j=max(j,i);
            while(j<n-1&&pre[j]>=A[j+1].first) {
                ++j;
            }
            answers[A[i].second]=j;
        }
        for (auto x:answers) cout << x << " ";
        cout << endl;
    }
    
}

#include <bits/stdc++.h>
using namespace std;

int main() {
     ifstream cin("helpcross.in");
     ofstream cout("helpcross.out");
    int C, N;
    cin >> C >> N;
    int T[C];
    vector<pair<int, int>> cows;
    for (int i = 0; i < C; ++i) cin >> T[i];
    for (int i = 0; i < N; ++i) { 
        int A, B;
        cin >> A >> B;
        cows.push_back({A, B});
    }
   
    std::sort(cows.begin(), cows.end(), [](auto &left, auto &right) {
    return left.second < right.second;
});

    int ans=0;
    multiset<int> ms;
    for(int i=0;i<C;++i) ms.insert(T[i]);
    for(int i=0;i<N;++i){
        auto it=ms.lower_bound(cows[i].first);
        if(it != ms.end() && *it <= cows[i].second){
            ms.erase(it);
            ++ans;
        }
    }
    cout<<ans<<endl; 
}

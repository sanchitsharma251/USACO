#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
    int N, M, R;
    cin >> N >> M >> R;
    vector<int> produce(N);
    vector<pii> buy(M);
    vector<int> rent(R);
    for (int i = 0; i < N; ++i) cin >> produce[i];
    for (int i = 0; i < M; ++i) cin >> buy[i].first >> buy[i].second;
    for (int i = 0; i < R; ++i) cin >> rent[i];
    sort(produce.begin(), produce.end(), greater<int>());
    sort(buy.begin(), buy.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });
    sort(rent.begin(), rent.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < N; ++i) sum += produce[i];
   
    vector<int> buyersProfits(N);
    for (int i = 0; i < N; ++i) {
        
    } 
}

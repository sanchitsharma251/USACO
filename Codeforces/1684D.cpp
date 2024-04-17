#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N, K; cin >> N >> K;
    int A[N]; for (int i = 0; i < N; i++) cin >> A[i];

    vector<pair<int, int>> B;
    for (int i = 0; i < N; i++) {
      B.push_back({A[i], i});
    }
    
    sort(B.begin(), B.end(), [&N](auto& left, auto& right){
      return (N - left.second - 1) - left.first < (N - right.second - 1) - right.first;
    });

    vector<pair<int, int>> C;
    for (int i = 0; i < K; i++) {
      C.push_back(B[i]); 
    }
    
    sort(C.begin(), C.end(), [&N](auto& left, auto& right) {
      return left.second < right.second;
    });

    int j = 0;
    int increment = 0;
    ll final_damage = 0;
    for (int i = 0; i < N; i++) {
      if (j < K && C[j].second == i) {
        j++;
        increment++;
        continue;
      }
      final_damage += (A[i] + increment);
    }
    cout << final_damage << "\n";
    
  }
}

#include <bits/stdc++.h>

using namespace std;

vector<int> findFactors(int n) {
  vector<int> factors; 
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      factors.push_back(i);
      factors.push_back(n / i);
    }
  }
  return factors;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
  
    sort(a, a + n);

    vector<int> freq(m + 5, 0);
    long long cnt = 0;
    long long j = 0;
    long long ans = 0;
    for (long long i = 0; i< n; ++i) {
      for (auto x:)
    }
  }
}

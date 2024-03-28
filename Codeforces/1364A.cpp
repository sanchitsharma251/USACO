#include <bits/stdc++.h>
using namespace std;

int main() {
  int test_cases;
  cin >> test_cases;
  for (int test_case = 0; test_case < test_cases; ++test_case) {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i < n; ++i) a[i] = a[i] % x;

    int sum = 0;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
      sum += a[i];
      mp[(x - sum % x) % x];
    }
  }

}
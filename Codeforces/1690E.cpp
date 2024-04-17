#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

    ll sum = 0;
    for (int i = 0; i < n; i++) {
      sum += a[i] / k;
      a[i] = a[i] % k;
    }

    sort(a, a + n, [](int x, int y){
        return x > y;
    });

    for (int i = 0, j = n - 1; i < j; i++, j--) {
      while (a[i] + a[j] < k && i < j) j--;
      if (i == j) break;
      sum++;
    } 
    
    cout << sum << endl;
  }
}

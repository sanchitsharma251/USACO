#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;

    int x = max(a, b);
    int y = min(a, b);
    int diff = x - y;
    if (diff % 2 == 0) {
      cout << y + 1 << endl;
      for (int i = 0; i <= y; ++i) {
        cout << diff / 2 + 2 * i << " ";
      }
    } else {
      cout << 2 * (y + 1) << endl;
      for (int i = 0; i <= y; ++i) {
        cout << diff / 2 + 2 * i << " " << diff / 2 + 1 + 2 * i << " ";  
      }
    }
    cout << "\n";
  }
}
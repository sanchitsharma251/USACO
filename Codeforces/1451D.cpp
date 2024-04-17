#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll d, k;
    cin >> d >> k;

    ll h = 0;
    ll v = 0;
    while (h * h * k * k + v * v * k * k <= d * d) {
      if (h == v) h++;
      else v++;
    }

    if (h == v) v--;
    else h--;

    if ((h + v) % 2 == 0) cout << "Utkarsh" << endl;
    else cout << "Ashish" << endl;

  }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n <= 3) {
      cout << -1 << endl;
      continue;
    }
    if (n == 4) {
      cout << "3 1 4 2" << endl;
      continue;
    }
    if (n % 2 == 0) {
      string answer = "";
      for (int i = n; i >= 2; i -= 2) {
        answer += (to_string(i) + " ");
      }
      answer += "5 ";
      int odd = 1;
      for (int i = n / 2 + 1; i < n; ++i) {
        if (odd == 5) odd += 2;
        answer += (to_string(odd) + " ");
        odd += 2;
      }
      cout << answer << endl; 
    } else {
      string answer = "";
      for (int i = n; i >= 1; i -= 2) {
        answer += (to_string(i) + " ");
      }

      answer += "4 2 ";
      for (int i = 6; i <= n; i += 2) {
        answer += (to_string(i) + " ");
      }
      cout << answer << endl;
    } 
  } 
}
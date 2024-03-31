#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> s(n + 1);
    for (int i = 0; i < n; i++) cin >> s[i];

    int valid = 0;

    for (int i = 0; i < n; i++) {
      if (s[i].size() == 1) {
        valid = 1;
        cout << "YES" << endl;
        break; 
      }
    }

    set<string> reversed_strings;
    for (int i = 0; i < n; i++) {
      if (s[i].size() == 2) {
        char c1 = s[i][0];
        char c2 = s[i][1];
        string reversed_string = "";
        reversed_string += c2;
        reversed_string += c1;
        if (reversed_string == s[i]) {
          cout << "YES" << endl;
          valid = 1;
          break;
        }
        if (reversed_strings.find(s[i]) != reversed_strings.end()) {
          cout << "YES" << endl;
          valid = 1;
          break;
        } else {
          reversed_strings.insert(reversed_string);
        }
      } else {
        char c1 = s[i][0];
        char c2 = s[i][1];
        char c3 = s[i][2];
        string reversed_string = "";
        reversed_string += c3;
        reversed_string += c2;
        reversed_string += c1;
        if (reversed_string == s[i]) {
          cout << "YES" << endl;
          valid = 1;
          break;
        }
        if (reversed_strings.find(s[i]) != reversed_strings.end() || reversed_strings.find(s[i].substr(1, 2)) != reversed_strings.end()) {
          valid = 1;
          cout << "YES" << endl;
          break;
        } else {
          reversed_strings.insert(reversed_string);
          reversed_strings.insert(reversed_string.substr(1, 2));
        }
      }
    }
    if (!valid) cout << "NO" << endl;
  }
}

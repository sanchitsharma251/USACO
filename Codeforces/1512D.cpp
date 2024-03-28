#include <iostream>
#include <set>
#include <vector>
#include <utility>
#include <map>
#include <cstdio>

typedef std::pair<int, int> pii;
typedef long long ll;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);

  int test_cases;
  std::cin >> test_cases;
  for (int test_case = 0; test_case < test_cases; ++test_case) {
    int n;
    std::cin >> n;
    int b[n + 2];
    for (int i = 0; i < n + 2; ++i) std::cin >> b[i];

    ll sum = 0;
    for (int i = 0; i < n + 2; ++i) sum += b[i];

    std::map<ll, ll> mp;
    pii remove_indices = {-1, -1};
    for (int i = 0; i < n + 2; ++i) {
      if (mp.find(b[i]) != mp.end()) {
        remove_indices = {mp[b[i]], i};
        break;
      } else {
        sum -= b[i];
        if (sum % 2 == 0) {
          mp[sum / 2] = i;
        }
        sum += b[i];
        mp[sum - 2 * b[i]] = i;
      }
    }

    if (remove_indices.first == -1 && remove_indices.second == -1) {
      std::cout << -1 << "\n";
      continue;
    }

    std::vector<int> a; 
    for (int i = 0; i < n + 2; ++i) {
      if (i == remove_indices.first || i == remove_indices.second) {
        continue;
      } else {
        a.push_back(b[i]);
      }
    }

    for (auto element: a) std::cout << element << " ";
    std::cout << "\n";

  }
}
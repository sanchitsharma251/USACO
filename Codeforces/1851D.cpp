#include <iostream>
#include <vector>

typedef long long ll;
typedef std::pair<int, int> pii;


int main() {
  int test_cases;
  std::cin >> test_cases;
  for (int i = 0; i < test_cases; ++i) {
    int n;
    std::cin >> n;
    ll prefix_sum[n];
    for (int i = 0; i < n - 1; ++i) std::cin >> prefix_sum[i];
    std::vector<int> visited(n, 0);
    for (int i = 1; i < n; ++i) {
      if (prefix_sum[i] - prefix_sum[i - 1] <= n) {
        std::cout << prefix_sum[i] - prefix_sum[i - 1] << std::endl;
        visited[prefix_sum[i] - prefix_sum[i - 1]] = 1;
      }
    }

    ll not_visited = 0;
    for (int i = 1; i < n + 1; ++i) {
      if (visited[i] == 0) {
        ++not_visited;
      }
    }

    std::cout << not_visited << std::endl;
    if (not_visited == 2) std::cout << "YES" << "\n";
    else std::cout << "NO" << "\n";
    
  }
}
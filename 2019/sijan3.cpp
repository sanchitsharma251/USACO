#include <iostream>
#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> pii;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0); 

  int n;
  std::cin >> n;

  std::vector<pii> coordinates(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> coordinates[i].first >> coordinates[i].second;
  }

  sort(coordinates.begin(), coordinates.end(), std::greater<int>());
  
  int sum[n];
  for (int i = 0; i < n; ++i) {
    sum[i] = coordinates[i].first + coordinates[i].second;
  }
  int difference[n];
  for (int i = 0; i < n; ++i) {
    difference[i] = coordinates[i].first - coordinates[i].second;
  }

  return 0;
}
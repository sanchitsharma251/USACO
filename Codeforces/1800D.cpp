#include <iostream>
#include <set>
#include <stack>
#include <utility>
#include <vector>

int main() {
  int test_cases;
  std::cin >> test_cases;
  for (int test_case = 0; test_case < test_cases; ++test_case) {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::vector<char> current_string;
    for (int i = n - 1; i >= 2; --i) {
      current_string.push_back(s[i]);
    }

    std::set<std::vector<char>> st;
    st.insert(current_string);

    for (int i = 1; i < n; ++i) {
      for (auto x: current_string) std::cout << x << " ";
      std::cout << std::endl;
      current_string.pop_back();
      current_string.push_back(s[i - 1]);
      st.insert(current_string);
    }

    std::cout << st.size() << "\n";

  }
}
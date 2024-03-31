#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("day1.in", "r", stdin);
  freopen("day1.out", "w", stdout);
  
  int n = 100;
  int sum_of_fuel_requirements = 0;
  for (int i = 0; i < n; ++i) {
    int mass;
    cin >> mass;

    while (mass > 0) {
      int mass_divided_by_three = mass / 3;
      mass_divided_by_three -= 2;
      if (mass_divided_by_three <= 0) break;
      sum_of_fuel_requirements += mass_divided_by_three;
      mass = mass_divided_by_three;
    }
  }

  cout << sum_of_fuel_requirements << endl;
}

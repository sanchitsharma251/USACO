#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << setprecision(6);
  double answer = (double)(a * d) / (double)(b * c + a * d - a * c);  
  cout << answer << endl;
}
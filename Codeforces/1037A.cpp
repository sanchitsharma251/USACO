#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <utility>
#include <algorithm>
#include <cmath>
using namespace std;


typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<string> vs;


int main() {
  int n;
  cin >> n;
  cout << (int)log2(n) + 1 << endl;
  return 0; 
}
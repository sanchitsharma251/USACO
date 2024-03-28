#include <iostream>
#include <map>
#include <algorithm>
#include <set>
#include <cstdio>

using namespace std;

const int maxN = 1e5 + 5e4;
int n, a[maxN];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  for (int i = 0; i < n; ++i) 
    cin >> a[i];

  sort(a, a + n);
  map<int, int> freq;
  for (int i = 0; i < n; ++i) {
    freq[a[i]]++;
  }

  int teams = 0;
  set<int> wrestlers;
  for (auto pair: freq) {
    int num = pair.first;
    int cnt = pair.second;
    if (wrestlers.find(num - 1) == wrestlers.end() && num > 1) {
      wrestlers.insert(num - 1);
      --cnt;
    }
    if (wrestlers.find(num) == wrestlers.end() && cnt > 0) {
      wrestlers.insert(num);
     --cnt;
    }
    if (wrestlers.find(num + 1) == wrestlers.end() && cnt > 0) {
      wrestlers.insert(num + 1);
      --cnt;
    }
  }
  cout << wrestlers.size() << endl;
}

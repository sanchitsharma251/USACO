#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("cowtip.in");
  ofstream fout("cowtip.out");
  int N;
  fin >> N;
  vector<vector<int>> cows;
  for (int i = 0; i < N; ++i) {
    string row;
    fin >> row;
    vector<int> rowCopy;
    for (char c : row) {
      rowCopy.push_back(c-'0');
    }
    cows.push_back(rowCopy);
  }
  // Start backwards and once you find a 1, flip all the bits in that rectangle
  int answer = 0;
  for (int i = N - 1; i >= 0; --i) {
    for (int j = N - 1; j >= 0; --j) {
      if (cows[i][j] == 1) {
        for (int k = 0; k <= i; ++k) {
          for (int l = 0; l <= j; ++l) {
            cows[k][l] = !cows[k][l];
          }
        }
        ++answer;
      }
    }
  }
  fout << answer << endl;
}
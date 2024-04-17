#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxN = 2e5;
const int maxQ = 2e5;

int N, Q;
int A[maxN + 4];
int queries[maxQ + 4][2];
int s[maxN + 4], S[maxN + 4];

int main (int argc, char *argv[]) {
  cin >> N >> Q;
  for (int i = 1; i <= N; i++) cin >> A[i];

  for (int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;
    s[r]++; S[l - 1]++;
  }

  for (int i = N; i >= 1; i--) {
    s[i - 1] += s[i];
    S[i - 1] += S[i];
    s[i] -= S[i];
  }

  sort(s + 1, s + 1 + N);
  sort(A + 1, A + 1 + N);
  ll sum = 0;
  for (int i = 1; i <= N; i++) {
    sum += (ll) (A[i] * s[i]);
  }
  cout << sum;
  return 0;
}

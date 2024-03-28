#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("lemonade.in");
    ofstream fout("lemonade.out");

    int N;
    fin >> N;
    int A[N];
    for (int i = 0; i < N; ++i) fin >> A[i];

    sort(A, A + N, greater<int>());
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] >= i) {
            ++ans;
        } else {
            break;
        }
    }
    fout << ans << endl;
}
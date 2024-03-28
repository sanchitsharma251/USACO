#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int A[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> A[i][j];
            }
        }

        vector<int> o;
        vector<int> z;
        for (int i = 0; i < m; ++i) {
            int currentOnes = 0;
            int currentZeroes = 0;
            for (int j = i; j >= max(0, i - n + 1); --j) {
                if (A[i - j][j]) ++currentOnes;
                else ++currentZeroes;
            }
            o.push_back(currentOnes);
            z.push_back(currentZeroes);
        }
        for (int i = 1; i < n; ++i) {
            int currentOnes = 0;
            int currentZeroes = 0;
            for (int j = 0; j <= min(m - 1, n - i - 1); ++j) {
                if (A[i + j][(m - 1) - j]) ++currentOnes;
                else ++currentZeroes;
            }
            o.push_back(currentOnes);
            z.push_back(currentZeroes);
        }
        int numberOfDiagonals = o.size();
        int firstHalf = numberOfDiagonals / 2;
        int answer = 0;
        for (int i = 0; i < firstHalf; ++i) {
            answer += min(o[i] + o[o.size() - i - 1], z[i] + z[o.size() - i - 1]);
        }
        cout << answer << endl;
    }
}
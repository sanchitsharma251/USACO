#include <bits/stdc++.h>
using namespace std;

void solve() {

}

int main() {
    ifstream fin("tracing.in");
    ofstream fout("tracing.out");

    // Read the input
    int N, T;
    string S;
    fin >> N >> T >> S;
    vector<vector<int>> A;
    for (int i = 0; i < T; ++i) {
        int t, x, y;
        fin >> t >> x >> y;
        A.push_back({t, x, y});
    }
    sort(A.begin(), A.end());

    // Assume that cow number i is the infected cow
    int x = 0;
    int y = 0;
    int z = 0;
    for (int i = 1; i < N + 1; ++i) {
        vector<int> B(N, 0);
        B[i - 1] = 1;
        bool found = 0;
        for (vector<int> k: A) {
            for (int j = 1; j < N + 1; ++j) {
                string infected;
                for (int l: B) {
                    infected += l + '0';
                }
                if (infected == S) {
                    cout << "For case " << i << ": " << infected << endl;
                    ++x;
                    found = 1;
                    break;
                }
                if (j == k[1] && B[j - 1] == 1) {
                    B[k[2] - 1] = 1;
                }
                if (j == k[2] && B[j - 1] == 1) {
                    B[k[1] - 1] = 1;
                }
            }
            if (found) break;
        }
    }
    fout << x;

    
    
}
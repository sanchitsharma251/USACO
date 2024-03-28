#include <bits/stdc++.h>
using namespace std;

int checkIfValid(int X, int Y, int M, int N) {
    while (N >= 0) {
        N -= X;
        if (N % Y == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    ifstream fin("pails.in");
    ofstream fout("pails.out");
    int X, Y, M;
    fin >> X >> Y >> M;
    int ans = 0;
    for (int i = 1; i <= M; ++i) {
        if (checkIfValid(X, Y, M, i)) {
            ans = i;
        }
    }
    fout << ans << endl;
}

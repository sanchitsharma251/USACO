#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream fin("lifeguards.in");
    ofstream fout("lifeguards.out");
    int N;
    fin >> N;
    vector<pair<int, int>> times(N);
    for (int i = 0; i < N; ++i) {
        fin >> times[i].first >> times[i].second;
    }
    int answer = 0;
    for (int i = 0; i < N; ++i) {
        int ctime = 0;
        for (int j = 0; j < 1001; ++j) {
            for (int k = 0; k < N; ++k) {
                if (k != i) {
                    if (times[k].first < j && j <= times[k].second) {
                        ++ctime;
                        break;
                    }
                }
            }
        }
        answer = max(answer, ctime);
    }
    fout << answer;
}
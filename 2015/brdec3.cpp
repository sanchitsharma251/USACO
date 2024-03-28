#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("badmilk.in");
    ofstream fout("badmilk.out");
    int N, M, D, S;
    fin >> N >> M >> D >> S;

    vector<vector<int>> pmt;
    vector<vector<int>> spt;
    for (int i = 0; i < D; ++i) {
        int p, m, t;
        fin >> p >> m >> t;
        pmt.push_back({p, m, t});
    }
    for (int i = 0; i < S; ++i) {
        int p, t;
        fin >> p >> t;
        spt.push_back({p, t});
    }
    int answer = 0;
    for (int i = 1; i <= M; ++i) {
        map<int, int> drank;
        set<int> num_drank;
        for (int j = 0; j < D; ++j) {
            if (pmt[j][1] == i) {
                drank[j] = pmt[j][2]; 
                num_drank.insert(pmt[j][0]);
            }
        }
        bool flag = false;
        for (int j = 0; j < S; ++j) {
            int sickTime = spt[j][1];
            int sickPerson = spt[j][0];
            bool found = false;
            for (auto k: drank) {
                if (pmt[k.first][0] == sickPerson) {
                    if (k.second >= sickTime) flag = true;
                }
                if (pmt[k.first][0] == spt[j][0]) found = true;
            }
            if (!found) flag = true;
        }
        int unique_drank = num_drank.size();
        if (flag) continue;
        else answer = max(answer, unique_drank);
    }
    fout << answer << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> cows;
    for (int i = 0; i < N; ++i) {
        int s_i, t_i, c_i;
        cin >> s_i >> t_i >> c_i;
        cows.push_back({s_i, t_i, c_i});
    }
    vector<vector<int>> air_conditioners;
    for (int i = 0; i < M; ++i) {
        int a_i, b_i, p_i, m_i;
        cin >> a_i >> b_i >> p_i >> m_i;
        air_conditioners.push_back({a_i, b_i, p_i, m_i});
    }
    int answer = 10000000;
    for (int i = 0; i < (1 << M); i++) {
        vector<vector<int>> current_conditioners;
        int min_cost = 0;
        for (int j = 0; j < M; j++) {
             if ((i & (1 << j)) != 0) {
                current_conditioners.push_back(air_conditioners[j]);
                min_cost += air_conditioners[j][3];
            }
        }
        map<int, int> mp;
        for (int j = 1; j < 101; ++j) {
            bool found = false;
            for (int k = 0; k < cows.size(); ++k) {
                if (cows[k][0] <= j && j <= cows[k][1]) {
                    mp[j] = cows[k][2];
                    found = true;
                }
            }
            if (!found) mp[j] = 0;
        }
        // After knowing what temperature each cow has we can figure out if the sequence is valid
        bool fail = false;
        for (auto x: mp) {
            for (int j = 0; j < current_conditioners.size(); ++j) {
                int starting_stall = current_conditioners[j][0];
                int ending_stall = current_conditioners[j][1];
                if (starting_stall <= x.first && x.first <= ending_stall) {
                    x.second -= current_conditioners[j][2];
                }
            }
            if (x.second > 0) fail = true;
        }
        if (!fail) answer = min(answer, min_cost);
    }
    cout << answer << endl;
}
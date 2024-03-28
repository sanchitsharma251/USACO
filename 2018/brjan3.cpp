#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("outofplace.in");
    ofstream fout("outofplace.out");
    int N;
    fin >> N;
    vector<int> positions;
    for (int i = 0; i < N; ++i) {
        int position;
        fin >> position;
        positions.push_back(position);
    }
    vector<int> bessie = {-1, -1, -1};
    for (int i = 0; i < N-1; ++i) {
        if (positions[i] > positions[i+1]) {
            bool its_i = true;
            int lastNum = positions[0];
            for (int j = 1; j < N; ++j) {
                if (j == i) {
                    continue;
                } else {
                    if (positions[j] < lastNum) {
                        its_i = false;
                    }
                    lastNum = positions[j];
                }
            }
            if (its_i) {
                bessie[0] = i;
                bessie[1] = positions[i];
                bessie[2] = 0;
            } else {
                bessie[0] = i + 1;
                bessie[1] = positions[i + 1];
                bessie[2] = 1;
            }
            break;
        }
    }
    int blocks = 0;
    if (bessie[2] == 0) {
        int cur = bessie[1];
        for (int i = bessie[0] + 1; i < N; ++i) {
            if (cur != positions[i] && positions[i] < bessie[1]) {
                ++blocks;
                cur = positions[i];
            }
        }
    } else {
        int cur = -1;
        for (int i = 0; i < bessie[0] + 1; ++i) {
            if (cur != positions[i] && positions[i] > bessie[1]) {
                ++blocks;
                cur = positions[i];
            }
        }
    }
    fout << blocks << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");
    int K, N;
    fin >> K >> N;
    vector<vector<int>> results;
    for (int i = 0; i < K; ++i) {
        vector<int> row;
        for (int j = 0; j < N; ++j) {
            int u;
            fin >> u;
            row.push_back(u);
        }
        results.push_back(row);
    }
    int answer = 0;
    for (int i = 1; i < N + 1; ++i) {
        for (int j = i + 1; j < N + 1; ++j) {
            int curResult = -1;
            int validPairing = 1;
            for (int k = 0; k < K; ++k) {
                // The main thing at this point is to check if pairing is a, b or b, a
                // If pairing is low to high, say 0 otherwise say 1
                int ipos, jpos;
                for (int l = 0; l < N; ++l) {
                    if (results[k][l] == i) {
                        ipos = l;
                    } 
                    if (results[k][l] == j) {
                        jpos = l;
                    }
                }
                if (curResult < 0) {
                    if (ipos > jpos) curResult = 0;
                    else curResult = 1;
                } else {
                    if (ipos > jpos && curResult == 1) validPairing = 0;
                    else if (ipos < jpos && curResult == 0) validPairing = 0;
                }                
            }
            if (validPairing == 1) {++answer;}
        }
    }
    fout << answer << endl;
}

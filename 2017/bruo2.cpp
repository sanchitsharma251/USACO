#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("cownomics.in");
    ofstream fout("cownomics.out");
    int N, M;
    fin >> N >> M;
    vector<string> genomes;
    for (int i = 0; i < N*2; ++i) {
        string s;
        fin >> s;
        genomes.push_back(s);
    }
    int answer = 0;
    for (int i = 0; i < M; ++i) {
        // Spotty cow 
        bool flag = false;
        vector<char> genomes_spotty;
        for (int j = 0; j < N; ++j) {
            genomes_spotty.push_back(genomes[j][i]);
        }
        for (int j = N; j < 2*N; ++j) {
            for (auto &k: genomes_spotty) {
                if (genomes[j][i] == k) {
                    flag = true;
                }
            }
        }
        if (!flag) ++answer;
    }
    fout << answer << endl;
}
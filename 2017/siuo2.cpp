#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream fin("cownomics.in");
    ofstream fout("cownomics.out");
    int N, M;
    fin >> N >> M;

    vector<string> genomes;
    for (int i = 0; i < 2*N; ++i) {
        string genome;
        fin >> genome;
        genomes.push_back(genome);
    }
    int answer = 0;
    for (int i = 0; i < M; ++i) {
        for (int j = i + 1; j < M; ++j) {
            for (int k = j + 1; k < M; ++k) {
                bool flag = false;
                map<string, bool> seen;
                for (int l = 0; l < N; ++l) {
                    string genome_s3;
                    genome_s3 += genomes[l][i];
                    genome_s3 += genomes[l][j];
                    genome_s3 += genomes[l][k];
                    seen[genome_s3] = true;
                }
                for (int l = N; l < 2*N; ++l) {
                    string genome_n3;
                    genome_n3 += genomes[l][i];
                    genome_n3 += genomes[l][j];
                    genome_n3 += genomes[l][k];
                    if (seen.find(genome_n3)!=seen.end()) {flag = true; break;}
                }
                if (!flag) ++answer;
                // Find intersection between the triples
            }
        }
    }
    fout << answer;
}
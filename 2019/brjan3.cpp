#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream fin("guess.in");
    ofstream fout("guess.out");
    int N;
    fin >> N;
    map<string, vector<string>> animals;
    for (int i = 0; i < N; ++i) {
        string animal;
        int K;
        fin >> animal >> K;
        vector<string> animal_traits;
        for (int j = 0; j < K; ++j) {
            string trait;
            fin >> trait;
            animal_traits.push_back(trait);
        }
        animals[animal] = animal_traits;
    }

    int answer = 0;
    for (auto &i: animals) {
        for (auto &j: animals) {
            int shared = 0;
            if (i.first != j.first) {
                vector<string> va = i.second;
                vector<string> vb = j.second;
                map<string, int> ma;
                for (int k = 0; k < va.size(); ++k) {
                    ma[va[k]] = 1;
                }
                for (int k = 0; k < vb.size(); ++k) {
                    if (ma.find(vb[k])!=ma.end()) ++shared;
                }
            }
            answer = max(answer, shared + 1);
        }
    }
    fout << answer;
}
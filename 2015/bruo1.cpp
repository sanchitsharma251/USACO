#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> words;
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        words.push_back(s);
    }
    for (auto &i: words) cout << i << endl;
    int answer = 0;
    // Find the mapping??
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < 26; ++j) {
            if (i != j) {
                char M = alphabet[i];
                char O = alphabet[j];
                cout << M << " " << O << endl;
                int cmax = 0;
                for (int k = 0; k < N; ++k) {
                    for (int l = 0; l < M - 2; ++l) {
                        if (words[k][l] == M && words[k][l+1]==O && words[k][l+2]==O) ++cmax;
                    }
                }

                for (int k = 0; k < M; ++k) {
                    for (int l = 0; l < N - 2; ++l) {
                        if (words[l][k] == M && words[l+1][k] == O && words[l+2][k] == O) ++cmax;
                    }
                }

                for (int k = 0; k < M; ++k) {
                    for (int l = 0; l < N; ++l) {
                        // Bottom right
                        if ((k+2<M)&&(l+2<N)&&(words[k][l]==M&&words[k+1][l+1]==O&&words[k+2][l+2]==O)) ++cmax;
                        // top left
                        // if (k-2>=0&&l-2>=0&&(words[k][l]==M&&words[k-1][l-1]==O&&words[k-2][l-2]==O)) ++cmax;
                        // //top right
                        // if (k-2>=0&&l+2<N&&(words[k][l]==M&&words[k-1][l+1]==O&&words[k-2][l+2]==O)) ++cmax;
                        // // bottom left
                        // if (k+2<M&&l-2>=0&&(words[k][l]==M&&words[k+1][l-1]==O&&words[k+2][l-2]==O)) ++cmax;
                    }
                }
                answer = max(answer, cmax);
                cout << cmax << endl;
            }
        }
    }

    cout << answer << endl;

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    // Fix the left-most element and then iterate
    int answer = 0;
    for (int i = 0; i < N; ++i) {
        int g = 0;
        int h = 0;
        for (int j = i; j < N; ++j) {
            g += S[j] == 'G';
            h += S[j] == 'H';
            if ((g == 1 || h == 1) && (j - i) > 1) {
                ++answer;
            }
        }
    }
    cout << answer << endl;
}
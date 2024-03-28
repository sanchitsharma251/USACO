#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    char c[3] = {'R', 'G', 'B'};
    int minR = INT_MAX;
    string minT = "";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (i == j || j == k || i == k) continue;
                int curR = 0;
                string curT = "";
                for (int l = 0; l < n; ++l) {
                    if (l % 3 == 0 && s[l] != c[i]) {
                        ++curR;
                        curT += c[i];        
                    } else if (l % 3 == 1 && s[l] != c[j]) {
                        ++curR;
                        curT += c[j];
                    } else if (l % 3 == 2 && s[l] != c[k]) {
                        ++curR;
                        curT += c[k];
                    } else {
                        curT += s[l];
                    }
                }
                if (curR < minR) {
                    minR = curR;
                    minT = curT;
                }
            }
        }
    }
    cout << minR << "\n" << minT << endl;
}

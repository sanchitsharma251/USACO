#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int answer = 0;
    for (int i = 0; i < 26; ++i) {
        for (int j = i + 1; j < 26; ++j) {
            char cowA = alphabet[i];
            char cowB = alphabet[j];

            vector<int> coordinatesB;
            vector<int> coordinatesA;
            for (int k = 0; k < 52; ++k) {
                if (s[k] == cowA) {
                    coordinatesA.push_back(k);
                }
                if (s[k] == cowB) {
                    coordinatesB.push_back(k);
                }
            }
            int x1 = coordinatesA[0];
            int y1 = coordinatesA[1];
            int x2 = coordinatesB[0];
            int y2 = coordinatesB[1];
            if ((x1 < x2 < y1 && y2 > y1) || (x2 < x1 < y2 && y1 > y2)) ++answer;
        }
    }
    cout << answer << endl;
}

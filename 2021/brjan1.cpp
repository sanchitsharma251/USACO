#include <bits/stdc++.h>
using namespace std;

int main() {
    string alphabet, s;
    cin >> alphabet >> s;
    int k = 0;
    int answer = 0;

    while (k < s.size()) {
        for (int i = 0; i < alphabet.size(); ++i) {
            if (alphabet[i] == s[k]) {
                ++k;
            }
        }
        ++answer;
    }
    cout << answer << endl;
    
}
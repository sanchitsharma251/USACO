#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; ++i) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Consider the string without the selected
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        vector<int> removalAnswers(26);
        for (int c = 0; c < 26; ++c) {
            char alpha = alphabet[c];
            int i = 0;
            int j = n - 1;
            int removed = 0;
            while (j > i) {
                if (s[i] == alpha && s[i] != s[j]) {
                    ++i;
                    ++removed;
                } else if (s[j] == alpha && s[i] != s[j]) {
                    --j;
                    ++removed;
                } else {
                    if (s[i] == s[j]) {
                        ++i;
                        --j;
                    } else {
                        removed = -1;
                        break;
                    }
                } 
            }
            removalAnswers[c] = removed;
        }
        int validSolution = 0;
        int minRemoved = INT_MAX;
        for (int i = 0; i < 26; ++i) {
            if (removalAnswers[i] >= 0) {
                validSolution = 1;
                minRemoved = min(minRemoved, removalAnswers[i]);
            }        
        }
        cout << ((minRemoved != INT_MAX) ? minRemoved : -1) << endl;
    }
}

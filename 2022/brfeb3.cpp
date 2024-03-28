#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string letters[4];
    for (int i = 0; i < 4; ++i) cin >> letters[i];

    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        if (word.size() > 4) cout << "NO" << endl;
        else {
            if (word.size() == 1) {
                bool found = 0;
                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 6; ++j) {
                        if (letters[i][j] == word[0]) {
                            found = 1;
                            cout << "YES" << endl;
                        }
                        if (found) break;
                    }
                    if (found) break;
                }
                if (!found) cout << "NO" << endl;
            } else if (word.size() == 2) {
                bool found = 0;
                for (int i = 0; i < 4; ++i) {
                    for (int j = i + 1; j < 4; ++j) {
                        for (int k = 0; k < 6; ++k) {
                            for (int l = 0; l < 6; ++l) {
                                string s;
                                s += letters[i][k];
                                s += letters[j][l];
                                int slen = s.size();
                                sort(s.begin(), s.end());
                                do {
                                    if (s == word) { cout << "YES" << endl; found = 1; }
                                    if (found) break;
                                } while (next_permutation(s.begin(), s.end()));
                                if (found) break;
                            }
                            if (found) break;
                        }
                        if (found) break;
                    }
                    if (found) break;
                }
                if (!found) cout << "NO" << endl;
            } else if (word.size() == 3) {
                bool found = 0;
                for (int i = 0; i < 4; ++i) {
                    for (int j = i + 1; j < 4; ++j) {
                        for (int k = j + 1; k < 4; ++k) {
                            for (int l = 0; l < 6; ++l) {
                                for (int m = 0; m < 6; ++m) {
                                    for (int n = 0; n < 6; ++n) {
                                        string s;
                                        s += letters[i][l];
                                        s += letters[j][m];
                                        s += letters[k][n];
                                        sort(s.begin(), s.end());
                                        do {
                                            if (s == word) { cout << "YES" << endl; found = 1;  }
                                            if (found) break;
                                        } while (next_permutation(s.begin(), s.end()));
                                        if (found) break;
                                    }
                                    if (found) break;
                                }
                                if (found) break;
                            }
                            if (found) break;
                        }
                        if (found) break;
                    }
                    if (found) break;
                }
                if (!found) cout << "NO" << endl;
            } else if (word.size() == 4) {
                bool found = 0;
                for (int i = 0; i < 4; ++i) {
                    for (int j = i + 1; j < 4; ++j) {
                        for (int k = j + 1; k < 4; ++k) {
                            for (int l = k + 1; l < 4; ++l) {
                                for (int m = 0; m < 6; ++m) {
                                    for (int n = 0; n < 6; ++n) {
                                        for (int o = 0; o < 6; ++o) {
                                            for (int p = 0; p < 6; ++p) {
                                                string s;
                                                s += letters[i][m];
                                                s += letters[j][n];
                                                s += letters[k][o];
                                                s += letters[l][p];
                                                sort(s.begin(), s.end());
                                                do {
                                                    if (s == word) { cout << "YES" << endl; found = 1; }
                                                    if (found) break;
                                                } while (next_permutation(s.begin(), s.end()));
                                                if (found) break;
                                            }
                                            if (found) break;
                                        }
                                        if (found) break;
                                    }
                                    if (found) break;
                                }
                                if (found) break;
                            }
                            if (found) break;
                        }
                        if (found) break;
                    }
                    if (found) break;
                }
                if (!found) cout << "NO" << endl;
            }
        }
    }
}
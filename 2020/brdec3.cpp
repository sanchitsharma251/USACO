#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> A;
    for (int i = 0; i < n; ++i) {
        char direction;
        cin >> direction;
        int x, y;
        cin >> x >> y;
        A.push_back({x, y, direction == 'N'});
    }

    for (int i = 0; i < n; ++i) {
        int d1 = A[i][2];
        int x1 = A[i][0];
        int y1 = A[i][1];
        int answer = INT_MAX; // This means infinity
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int d2 = A[j][2];
                int x2 = A[j][0];
                int y2 = A[j][1];
                if (d1 == d2) {
                    if (d1 == 1) {
                        if (x2 == x1) {
                            if (y1 < y2) {
                                answer = min(answer, y2 - y1);
                            }
                        }
                    }
                    if (d1 == 0) {
                        if (y2 == y1) {
                            if (x1 < x2) {
                                answer = min(answer, x2 - x1);
                            }
                        }
                    }
                }

                if (d1 == 1 && d2 == 0) {
                    if (x1 > x2 && y1 < y2) {
                        if (y2 - y1 > x1 - x2) {
                            answer = min(answer, y2 - y1);
                        }
                    }
                }
                if (d1 == 0 && d2 == 1) {
                    if (x1 < x2 && y1 > y2) {
                        if (y1 - y2 < x2 - x1) {
                            answer = min(answer, x2 - x1);
                        }
                    }
                }
            }
        }
        if (answer == INT_MAX) cout << "INFINITY" << endl;
        else cout << answer << endl;
    }
}
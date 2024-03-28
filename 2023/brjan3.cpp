#include <bits/stdc++.h>
using namespace std;

int minimumOperations(string s) {
    int stringSize = s.size();
    if (stringSize < 3) return -1;
    int answer = 100000;
    for (int i = 0; i < s.size() - 2; ++i) {
        string ss = s.substr(i, 3);
        int add;
        if (ss == "MOO") {
            add = 0;
        } else if (ss == "MOM" || ss == "OOO") {
            add = 1;
        } else if (ss == "OOM") {
            add = 2;
        } else {
            add = 100000;
        }
        answer = min(answer, stringSize - 3 + add);
    }
    if (answer == 100000) return -1;
    return answer;
}


int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        cout << minimumOperations(s) << endl;
    }
}
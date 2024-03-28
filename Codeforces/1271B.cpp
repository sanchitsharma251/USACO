#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> sw;
    string w = s;
    for (int i = 0; i < n - 1; ++i) {
        if (w[i] == 'B') {
            sw.push_back(i + 1);
            w[i] = 'W';
            if (w[i + 1] == 'B') w[i + 1] = 'W';
            else {
                w[i + 1] = 'B';
            }    
        }
    }
    vector<int> sb;
    string b = s;
    for (int i = 0; i < n - 1; ++i) {
        if (b[i] == 'W') {
            sb.push_back(i + 1);
            b[i] = 'B';
            if (b[i + 1] == 'B') b[i + 1] = 'W';
            else {
                b[i + 1] = 'B';
            } 
        }
    }
    
    int bw = 1;
    int ww = 1;
    for (int i = 0; i < n; ++i) {
        if (b[i] == 'W') bw = 0;
        if (w[i] == 'B') ww = 0;
    }
    if (bw) {
        cout << sb.size() << endl;
        for (auto x: sb) cout << x << " ";
    } else if (ww) {
        cout << sw.size() << endl;
        for (auto x: sw) cout << x << " ";
    } else {
        cout << -1 << endl;
    }
}

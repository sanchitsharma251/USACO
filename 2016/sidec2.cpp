#include <bits/stdc++.h>
using namespace std;

typedef pair<string, string> pss;

int main() {
    ifstream cin("citystate.in");
    ofstream cout("citystate.out");
    int N;
    cin >> N;
    map<pss, int> m1;
    for (int i = 0; i < N; ++i) {
        string city;
        string state;
        cin >> city >> state;
        ++m1[{city.substr(0, 2), state.substr(0, 2)}];
    }
    set<pss> s;
    int answer = 0;
    for (auto x: m1) {
        s.insert(x.first);
        if (s.find({x.first.second, x.first.first}) != s.end() && x.first.second != x.first.first) {
           answer += x.second * m1[{x.first.second, x.first.first}]; 
        }
    }
    cout << answer << endl;
    
}

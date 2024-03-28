#include <bits/stdc++.h>
using namespace std;

string solve(string s, int n) {
    map<char, int> freq;
    for (int i = 0; i < n; ++i){
        ++freq[s[i]];
    }
    int answer = INT_MAX; 
    for (int i = 1; i <= 26; ++i) {
        if (n % i == 0) {
             
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s, n) << endl;
    }
}

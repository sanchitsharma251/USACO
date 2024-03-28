#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        stack<int> s1;
        stack<int> s2;
        vector<char> v;
        for (int i = 0; i < n; ++i) v.push_back(s[i]);
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                if (s1.size() > 0) {
                    int top = s1.top();
                    v[top] = '.';
                    s1.pop();
                }
            } else if (s[i] == 'b') {
                if (s2.size() > 0) {
                    int top = s2.top();
                    v[top] = '.';
                    s2.pop();
                }
            } else {
                if (islower(s[i])) {
                    s2.push(i);
                } else {
                    s1.push(i);
                }
            }
        }
        string answer = "";
        for (int i = 0; i < n; ++i) {
            if (v[i] != 'b' && v[i] != 'B' && v[i] != '.') {
                answer += v[i];
            }
        }
        cout << answer << endl;
    }
}

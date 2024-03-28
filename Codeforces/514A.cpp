#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    ostringstream os;
    os << x;

    string digits = os.str();
    vector<char> v;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i] - '0';
        if (i == 0 && digit == 9) {
            v.push_back('9');
            continue;
        }
        if (digit >= 5) {
            v.push_back((9 - digit) + '0');
            continue;
        } 
        v.push_back((digit) + '0');
    }

    string s;
    for (int i = 0; i < v.size(); ++i) {
        s += v[i]; 
    }
    
    cout << s << endl; 
}

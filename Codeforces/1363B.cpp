#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // Valid strings include (1....)(0....), (0.....)(1....), (0......), (1......)
        int a = 0;
        for (int i = 0; i < s.size(); ++i) a += (s[i] == '1');
        int b = 0;
        for (int i = 0; i < s.size(); ++i) b += (s[i] == '0');

        int c = INT_MAX;
        int d = INT_MAX;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1') --a;
            if (s[i] == '0') ++a;
            c = min(c, a);
        }
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1') ++b;
            if (s[i] == '0') --b;
            d = min(d, b);
        }
        cout << min(a, min(b, min(c, d))) << "\n";
    }
}
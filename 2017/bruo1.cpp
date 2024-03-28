#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream cin("lostcow.in");
    ofstream cout("lostcow.out");

    int x, y;
    cin >> x >> y;

    int i = 0;
    int ans = 0;
    int n, o;
    n = x;
    while (true) {
        o = n;
        n = x + pow(-1, i) * pow(2, i);
        if ((i % 2 == 0 && o <= y && y <= n)) {
            ans += y - o;
            break;
        } 
        if ((i % 2 == 1 && n <= y && y <= o)) {
            ans += o - y;
            break;
        }
        ans += abs(n - o);
        ++i;
    }
   cout << ans;
}
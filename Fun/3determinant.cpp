#include <bits/stdc++.h>
using namespace std;

int determinant2x2(int a, int b, int c, int d) {
    return a * d - b * c;
}

int main() {
    int a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    cout << a * determinant2x2(e, f, h, i) - b * determinant2x2(d, f, g, i) + c * determinant2x2(d, e, g, h) << endl;
}
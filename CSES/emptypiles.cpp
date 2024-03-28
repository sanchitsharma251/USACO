#include <bits/stdc++.h>

using namespace std;
int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        long long a, b;
        std::cin >> a >> b;
        bool result = ceil(a/2) > b;
        double j = a/2;
        cout << j;
        if ((ceil(a / 2) > b) || (ceil(b / 2) > a) || ( a == 2 && b == 2 )) std::cout << "NO";
        else {
            std::cout << "YES";
        }
    }
}
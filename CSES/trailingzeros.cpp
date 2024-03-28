#include <bits/stdc++.h>
int main() {
    long long n;
    std::cin >> n;
    // Find powers of 5.
    int i = 5;
    int ans = 0;
    while (i <= n) {
        ans += floor(n / i);
        i *= 5;
    }
    std::cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
    	int n;
	    cin >> n;
        int b = INT_MAX;
        int isPrime = 1;
        for (int i = 2; i < (int)floor(sqrt(n)) + 1; ++i) {
            if (n % i == 0) {
                int x = n / i;
                b = min(min(b, n - i), n - x);
                isPrime = 0;
            }
        }
        if (isPrime) cout << 1 << " " << n - 1 << endl;
        else cout << n - b << " " << b << endl;
    }

}

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n >= 1) cout << 0 << endl;
    if (n >= 2) cout << 6 << endl;
    if (n >= 3) cout << 28 << endl;
    for (long long i = 4; i < n + 1; ++i) 
    {
        long long int result = (i*i)*(i+1)*(i-1)/2 - (4*i*i - 12*i + 8);
        cout << result << "\n";
    }
}
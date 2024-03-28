#include <bits/stdc++.h>
using namespace std;

int main() 
{

    long long n;
    cin >> n;
    if ((n * (n + 1)) % 4 != 0) cout << "NO";
    else 
    {
        long long s = n * (n + 1) / 4;
        long long a[n] = {0};
        long long l = 0;
        for (long long i = n; i > 0; --i) {
            if (s > i) { s -= i; a[i - 1] = i; ++l; }
            else { a[s - 1] = s; l++; break;}
        }
        cout << "YES" << endl;
        cout << l << endl;
        for (auto x: a) 
        {
            if (x > 0) cout << x << " ";
        }
        cout << "\n" << n - l << "\n";
        for (long long i = 0; i < n; ++i) {
            if (a[i] == 0) cout << i + 1 << " ";
        }
    } 

}
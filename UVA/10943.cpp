#include <bits/stdc++.h>
using namespace std;

int MOD = 1000000;

unsigned long long NCR(unsigned long long n, unsigned long long r)
{
    if (r == 0) return 1;
    if (r > n / 2) return NCR(n, n - r); 

    unsigned long long res = 1; 

    for (int k = 1; k <= r; ++k)
    {
        res *= (n - k + 1) % MOD;
        res /= k;
    }

    return res % MOD;
}

int main() {
    string s;
    while (getline(std::cin, s)) {
        string buf;
        stringstream ss(s);
        vector<string> tokens;
        while (ss >> buf) {
            tokens.push_back(buf);
        }
        if (tokens[0] == "0" && tokens[1] == "0") break;
        unsigned long long n = stoi(tokens[0]);
        unsigned long long k = stoi(tokens[1]);
        unsigned long long answer = NCR(n + k - 1, k - 1);
        cout << answer % MOD << endl;
        
    }
}
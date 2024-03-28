#include <bits/stdc++.h>
using namespace std;


int main() {
    int N, M, A;
    cin >> N >> M >> A;
    long long result = (ceil((double)N/A))*(ceil((double)M/A));
    cout << result;
}

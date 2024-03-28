#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("haybales.in");
    ofstream fout("haybales.out");
    int N, Q;
    fin >> N >> Q;
    vector<int> v(N);
    for (int i = 0; i < N; ++i) fin >> v[i];
    sort(v.begin(), v.end()); 
    for (int i = 0; i < Q; ++i) {
        int A, B;
        fin >> A >> B;
        vector<int>::iterator lo, hi;
        lo = lower_bound(v.begin(), v.end(), A); 
        hi = upper_bound(v.begin(), v.end(), B); 
        fout << (hi-v.begin())-(lo-v.begin()) << endl;
    }
}

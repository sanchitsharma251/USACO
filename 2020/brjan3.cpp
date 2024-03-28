#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("race.in");
    ofstream fout("race.out");
    double K, N;
    fin >> K >> N;
    for (int i = 0; i < N; ++i) {
        int X;
        fin >> X;
        long long a = ceil(((sqrt(4LL*K+2LL*X*X-2LL*X+1LL)-1LL)/(2LL)));
        long long sum = a*a + a - 0.5*(X - 1)*X;
        if (X > a) {
            long long a = floor((sqrt(8LL*K+1LL)-1LL)/(2LL));
            long long sum = (a*a + a)*0.5;
            fout << (a)+ceil((K-sum)/a) << endl;
        } else {
            fout << (a)+(a-X+1LL)+ceil((K-sum)/a) << endl; 
        }
    }   
}
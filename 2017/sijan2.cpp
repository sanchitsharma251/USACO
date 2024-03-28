#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("hps.in");
    ofstream fout("hps.out");

    int N;
    fin >> N;
    vector<char> symbols;
    const vector<char> moves = {'H', 'P', 'S'};
    vector<int> P = {0};
    vector<int> H = {0};
    vector<int> S = {0};
    int p, h, s;
    p = 0;
    h = 0;
    s = 0;

    for (int i = 0; i < N; ++i)
    {
        char move;
        fin >> move;
        symbols.push_back(move);
        if (move == 'P')
        {
            ++p;
        }
        if (move == 'S')
        {
            ++s;
        }
        if (move == 'H')
        {
            ++h;
        }
        P.push_back(h);
        S.push_back(p);
        H.push_back(s);
    }

    int answer = 0;

    for (int i = 1; i < symbols.size() + 1; ++i) {
        answer = max(answer, max(P[i-1], max(H[i-1], S[i-1])) + max(H[N]-H[i-1], max(S[N]-S[i-1], P[N]-P[i-1])));
    }

    fout << answer;
}
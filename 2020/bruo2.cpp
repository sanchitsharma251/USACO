#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("socdist2.in");
    ofstream fout("socdist2.out");

    int N;
    vector<int> A, B;
    fin >> N;

    for (int i = 0; i < N; ++i)
    {
        int x, s;
        fin >> x >> s;
        if (s == 1)
            A.push_back(x);
        else
            B.push_back(x);
    }

    int m = INT_MAX;
    for (auto x : A)
    {
        for (auto y : B)
        {
            m = min(m, abs(x - y));
        }
    }

    int ans = 1;
    sort(A.begin(), A.end());
    for (int i = 1; i < A.size(); ++i)
    {
        if (A[i] - A[i - 1] >= m)
            ++ans;
    }

    fout << ans;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("div7.in");
    ofstream fout("div7.out");

    int N;
    fin >> N;
    vector<int> ids;
    for (int i = 0; i < N; ++i)
    {
        int id;
        fin >> id;
        ids.push_back(id % 7);
    }

    int answer = 0;

    vector<int> prefix_sum = {0};
    for (int i = 1; i < N + 1; ++i)
    {
        prefix_sum.push_back(prefix_sum[i - 1] + ids[i - 1]);
    }

    for (int i = 0; i < N + 1; ++i)
    {
        for (int j = i + 1; j < N + 1; ++j)
        {
            if ((prefix_sum[j] - prefix_sum[i]) % 7 == 0)
            {
                answer = max(j - i, answer);
            }
        }
    }

    fout << answer;
}
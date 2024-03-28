#include <bits/stdc++.h>
using namespace std;

int main()
{

    ifstream fin("bcount.in");
    ofstream fout("bcount.out");

    int N, Q;
    fin >> N >> Q;

    vector<int> breed_ids;
    for (int i = 0; i < N; ++i)
    {
        int breed_id;
        fin >> breed_id;
        breed_ids.push_back(breed_id);
    }

    vector<pair<int, int>> queries;
    for (int i = 0; i < Q; ++i)
    {
        int a, b;
        fin >> a >> b;
        queries.push_back({a, b});
    }

    int a = 0;
    int b = 0;
    int c = 0;
    vector<int> ones = {0};
    vector<int> twos = {0};
    vector<int> threes = {0};
    for (int i = 0; i < breed_ids.size(); ++i)
    {
        if (breed_ids[i] == 1)
        {
            ++a;
        }
        if (breed_ids[i] == 2)
        {
            ++b;
        }
        if (breed_ids[i] == 3)
        {
            ++c;
        }
        ones.push_back(a);
        twos.push_back(b);
        threes.push_back(c);
    }

    for (int i = 0; i < Q; ++i)
    {
        fout << ones[queries[i].second] - ones[queries[i].first - 1] << " " << twos[queries[i].second] - twos[queries[i].first - 1] << " " << threes[queries[i].second] - threes[queries[i].first - 1] << endl;
    }
}

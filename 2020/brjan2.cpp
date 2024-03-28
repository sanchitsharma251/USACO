#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{

    ifstream fin("photo.in");
    ofstream fout("photo.out");

    int N;
    fin >> N;

    vector<int> pairs;
    for (int i = 0; i < N - 1; ++i)
    {
        int pair;
        fin >> pair;
        pairs.push_back(pair);
    }
    vector<int> answer;
    vector<int> correct(N, 1);
    for (int i = 1; i < N + 1; ++i)
    {
        int temp = i;
        vector<int> sol;
        vector<int> found(N, 0);
        for (int j = 0; j < N - 1; ++j)
        {
            if (temp <= 0 || temp > N)
                break;
            if (found[temp - 1] == 1)
                break;
            found[temp - 1] = 1;
            sol.push_back(temp);
            temp = pairs[j] - temp;
        }
        if (temp <= 0 || temp > N)
            continue;
        if (found[temp - 1] == 1)
            continue;
        found[temp - 1] = 1;
        sol.push_back(temp);
        if (found == correct)
        {
            answer = sol;
        }
    }
    for (int i = 0; i < N - 1; ++i)
        fout << answer[i] << " ";
    fout << answer[N - 1];
}
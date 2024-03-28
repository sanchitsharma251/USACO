#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{

    ifstream fin("taming.in");
    ofstream fout("taming.out");

    int N;
    fin >> N;
    vector<int> cows;

    for (int i = 0; i < N; ++i)
    {
        int cow;
        fin >> cow;
        cows.push_back(cow);
    }

    int minimum = 0;
    int maximum = 0;
    int found = 0;
    int i = N - 1;
    vector<int> marked(N, 0);
    while (i > 0)
    {
        if (marked[i] == 1)
        {
            --i;
            continue;
        }
        if (cows[i] == -1)
        {
            ++maximum;
        }
        if (cows[i] >= 0)
        {
            if (cows[i - cows[i]] > 0)
            {
                found = 1;
                break;
            }
            else
            {
                ++minimum;
                for (int j = i; j >= i - cows[i]; --j)
                {
                    marked[j] = 1;
                }
            }
        }
        --i;
    }
    // Perform a sanity check to see if the input is all correct
    for (int i = 0; i < N - 1; ++i) {
        if (cows[i + 1] - cows[i] != 1 && (cows[i + 1] != -1 && cows[i + 1] != 0) && (cows[i] != 0 && cows[i] != -1))
        {
            found = 1;
            break;
        }
    }
    if (marked[0] == 0 && (cows[0] == -1 || cows[0] == 0))
    {
        ++minimum;
        marked[0] = 1;
    }

    if (found)
        fout << "-1";
    else
        fout << minimum << " " << maximum + minimum;
}
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{

    ifstream fin("sleepy.in");
    ofstream fout("sleepy.out");

    int N;
    vector<int> cows;

    fin >> N;
    for (int i = 0; i < N; ++i)
    {
        int cow;
        fin >> cow;
        cows.push_back(cow);
    }

    
}
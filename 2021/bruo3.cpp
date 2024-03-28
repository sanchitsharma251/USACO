#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("test.in");
    int N, M;
    cin >> N >> M;

    char pasture[N][M];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> pasture[i][j];
        }
    }

    int answer = 0;
    // Finds overall intersections
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (pasture[i][j] == 'G')
            {
                // Checks corners
                if (i == 0 && j == 0)
                {
                    if (pasture[i][j + 1] == 'C' && pasture[i + 1][j] == 'C')
                    {
                        ++answer;
                    }
                }
                else if (i == N - 1 && j == M - 1)
                {
                    if (pasture[i][j - 1] == 'C' && pasture[i - 1][j] == 'C')
                    {
                        ++answer;
                    }
                }
                else if (i == 0 && j == M - 1)
                {
                    if (pasture[i][j - 1] == 'C' && pasture[i + 1][j] == 'C')
                    {
                        ++answer;
                    }
                }
                else if (i == N - 1 && j == 0)
                {
                    if (pasture[i - 1][j] == 'C' && pasture[i][j + 1] == 'C')
                    {
                        ++answer;
                    }
                }

                // Check the edges
                if (i == 0 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        ++answer;
                    }
                }
                else if (i == N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        ++answer;
                    }
                }
                else if (j == 0 && 0 < i && i < N - 1)
                {
                    if ((pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        ++answer;
                    }
                }
                else if (j == M - 1 && 0 < i && i < N - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        ++answer;
                    }
                }

                // Check the middle
                if (0 < i && i < N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') >= 2)
                    {
                        ++answer;
                    }
                }
            }
        }
    }
    
    // Check square submatrices
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < M - 1; ++j) {
            char tl = pasture[i][j];
            char tr = pasture[i][j + 1];
            char lr = pasture[i + 1][j + 1];
            char ll = pasture[i + 1][j];

            int neighborsG1 = 0;
            int neighborsG2 = 0;

            if (tl == 'G' && lr == 'G' && tr == 'C' && ll == 'C') {
                // look at tl
                if (i == 0 && j == 0) {
                    if (pasture[i][j + 1] == 'C' && pasture[i + 1][j] == 'C')
                    {
                        neighborsG1 = 2;
                    }
                }
                // Check the edges
                if (i == 0 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C');
                    }
                }
                else if (i == N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C');
                    }
                }
                else if (j == 0 && 0 < i && i < N - 1)
                {
                    if ((pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2;
                    }
                }
                else if (j == M - 1 && 0 < i && i < N - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i - 1][j] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2;
                    }
                }

                // Check the middle
                if (0 < i && i < N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C');
                    }
                }

                ++i;
                ++j;
                if (i == 0 && j == 0) {
                    if (pasture[i][j + 1] == 'C' && pasture[i + 1][j] == 'C')
                    {
                        neighborsG2 = 2;
                    }
                }
                // Check the edges
                if (i == 0 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C');
                    }
                }
                else if (i == N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C');
                    }
                }
                else if (j == 0 && 0 < i && i < N - 1)
                {
                    if ((pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C');
                    }
                }
                else if (j == M - 1 && 0 < i && i < N - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i + 1][j] == 'C');
                    }
                }

                // Check the middle
                if (0 < i && i < N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C');
                    }
                }

                --i;
                --j;
                if (neighborsG1 == 2 && neighborsG2 == 2) --answer;


            }
            if (tl == 'C' && lr == 'C' && tr == 'G' && ll == 'G') {

                ++j;
                if (i == 0 && j == 0) {
                    if (pasture[i][j + 1] == 'C' && pasture[i + 1][j] == 'C')
                    {
                        neighborsG1 = 2;
                    }
                }
                // Check the edges
                if (i == 0 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C');
                    }
                }
                else if (i == N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C');
                    }
                }
                else if (j == 0 && 0 < i && i < N - 1)
                {
                    if ((pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C');
                    }
                }
                else if (j == M - 1 && 0 < i && i < N - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i + 1][j] == 'C');
                    }
                }

                // Check the middle
                if (0 < i && i < N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') >= 2)
                    {
                        neighborsG1 = (pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C');
                    }
                }

                --j;
                ++i;
                if (i == 0 && j == 0) {
                    if (pasture[i][j + 1] == 'C' && pasture[i + 1][j] == 'C')
                    {
                        neighborsG2 = 2;
                    }
                }
                // Check the edges
                if (i == 0 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C');
                    }
                }
                else if (i == N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i - 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C');
                    }
                }
                else if (j == 0 && 0 < i && i < N - 1)
                {
                    if ((pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2;
                    }
                }
                else if (j == M - 1 && 0 < i && i < N - 1)
                {
                    if ((pasture[i - 1][j] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i - 1][j] == 'C') + (pasture[i - 1][j] == 'C') + (pasture[i + 1][j] == 'C') >= 2;
                    }
                }

                // Check the middle
                if (0 < i && i < N - 1 && 0 < j && j < M - 1)
                {
                    if ((pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C') >= 2)
                    {
                        neighborsG2 = (pasture[i + 1][j] == 'C') + (pasture[i][j - 1] == 'C') + (pasture[i][j + 1] == 'C') + (pasture[i - 1][j] == 'C');
                    }
                }

                --i;
                if (neighborsG1 == 2 && neighborsG2 == 2) --answer;
            }
        }
    }
    cout << answer << endl;
}
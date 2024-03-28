#include <iostream>
#include <vector>
#include <fstream>

int main()
{
    std::ifstream fin("swap.in");
    std::ofstream fout("swap.out");
    int N, K, A1, A2, B1, B2;
    fin >> N >> K >> A1 >> A2 >> B1 >> B2;

    int labels[N + 1];
    for (int i = 1; i <= N; ++i)
        labels[i] = i;

    int final_labels[N + 1];

    for (int i = 1; i <= N; ++i)
    {

        std::vector<int> visited(N + 1, 0);
        std::vector<int> cycle;

        while (!visited[labels[i]])
        {

            for (int j = 1; j <= N; ++j)
            {
                if (labels[j] == i)
                {
                    cycle.push_back(j);
                }
            }

            visited[labels[i]] = 1;

            for (int j = A1; j <= (A2 + A1) / 2; ++j)
            {
                int temp = labels[j];
                labels[j] = labels[A2 + A1 - j];
                labels[A2 + A1 - j] = temp;
            }

            for (int j = B1; j <= (B2 + B1) / 2; ++j)
            {
                int temp = labels[j];
                labels[j] = labels[B2 + B1 - j];
                labels[B2 + B1 - j] = temp;
            }
        }

        for (int j = 1; j <= N; ++j)
            labels[j] = j;


        final_labels[cycle[K % (cycle.size())]] = i;
    }

    for (int i = 1; i <= N; ++i)
        fout << final_labels[i] << "\n";
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i)
            cin >> A[i];

        double maximum = 10e9;
        double minimum = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            double x = (A[i] + A[i + 1]) / 2.0;

            if (A[i] > A[i + 1])
            {
                minimum = max(minimum, x);
            }

            if (A[i] < A[i + 1])
            {
                maximum = min(maximum, x);
            }
        }

        if (maximum < minimum)
            cout << "-1" << endl;
        else
        {
            if (maximum == minimum && int(maximum) != minimum)
            {
                cout << "-1" << endl;
                continue;
            }
            cout << int(ceil(minimum)) << endl;
        }
    }
}
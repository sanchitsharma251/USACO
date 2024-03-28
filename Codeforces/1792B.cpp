#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        if (a1 == 0)
            cout << 1 << endl;
        else
        {
            int difference = max(a2, a3) - min(a2, a3);
            int answer = min(a1, difference) + min(a2, a3) * 2 + a1 + 1;
            if (difference <= a1)
            {
                answer += min(a4, a1 - difference);
            }

            cout << min(a1 + a2 + a3 + a4, answer) << endl;
        }
    }
}
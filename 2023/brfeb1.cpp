#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, T;
    cin >> N >> T;

    vector<pair<long long, long long>> A;
    for (int i = 0; i < N; ++i)
    {
        long long d_i, b_i;
        cin >> d_i >> b_i;
        A.push_back({d_i, b_i});
    }

    long long ans = 0;
    long long haybales = A[0].second;
    for (int i = 0; i < N - 1; ++i)
    {
        if (A[i].first < T)
        {
            if (haybales >= A[i + 1].first - A[i].first)
            {
                haybales += A[i+1].second - (A[i + 1].first - A[i].first);
                ans += A[i + 1].first - A[i].first;
            }
            else
            {
                ans += (haybales);
                haybales = A[i+1].second;
            }
        }
    }
    if (haybales > T - A[A.size() - 1].first) {
        ans += T - A[A.size() - 1].first + 1;
    } else {
        ans += haybales;
    }
    cout << ans;

    // O(n^2)
    // long long haybales = 0;
    // long long ans = 0;
    // for (int i = 1; i < T + 1; ++i) {
    //     if (A.find(i) != A.end()) {
    //         haybales += A[i];
    //     }
    //     if (haybales > 0) {
    //         --haybales;
    //         ++ans;
    //     }
    // }
}
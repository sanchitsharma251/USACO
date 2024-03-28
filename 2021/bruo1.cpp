#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> A;
    int g = 0;
    for (int i = 0; i < N; ++i) {
        int b;
        cin >> b;
        if (b <= N)
            A.push_back(b);
        else
            ++g;
    }

    sort(A.begin(), A.end(), greater<int>());
    vector<int> prefix_sum = {A[0]};
    for (int i = 1; i < A.size(); ++i) prefix_sum.push_back(prefix_sum[i-1]+A[i]);
    int answer = 0;
    int l = A.size();
    for (int i = A.size() - 1; i >= 0; --i) {
        int s = prefix_sum[A.size() - i - 1] - prefix_sum[i];
        cout << s << " " << i << endl;
        if ((A.size()-i)*(A.size()-i)-s-g*(A.size()-i)<=L) answer = max(answer, N - i - 1);
    }
    cout << answer << endl;


}
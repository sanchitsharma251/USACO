#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> A(n);
        for (int i = 0; i < n; ++i) cin >> A[i];
 
        if (k >= 3) cout << 0 << endl;
        else {
            if (k == 1) {
                ll answer = 1000000000000000000;
                for (int i = 0; i < n; ++i) {
                    answer = min(answer, A[i]);
                }
                for (int i = 0; i < n; ++i) {
                    for (int j = i + 1; j < n; ++j) {
                        answer = min(answer, abs(A[j] - A[i]));
                    }
                }
                cout << answer << endl;
            } else {
                ll answer = 1000000000000000000;
                multiset<ll> ms;
                for (int i = 0; i < n; ++i) ms.insert(A[i]);
                for (int i = 0; i < n; ++i) {
                    answer = min(answer, A[i]);
                }
                for (int i = 0; i < n; ++i) {
                    for (int j = i + 1; j < n; ++j) {
                        ll difference = abs(A[j] - A[i]);
                        answer = min(answer, difference);
                        int fnd = (ms.find(difference) != ms.end());
                        ms.insert(difference);
                        auto low = ms.lower_bound(difference);   
                        auto high = ms.upper_bound(difference);
                        if (fnd) {
                            answer = 0;
                            break;       
                        } else {
                            if (low != ms.begin()) {
                                --low;
                                answer = min(answer, difference - *low); 
                            }
                        }
                        answer = min(answer, *high - difference); 
                        ms.erase(difference);
                    }
                }
                cout << answer << endl;
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<int> v(n);

    partial_sort_copy(a.begin(), a.end(), v.begin(), v.end(), comp);

    multiset<int> ms;
    int profit = 0;
    for (int i = 0; i < k; ++i) {
        profit += v[i];
        ms.insert(v[i]);
    }

    cout << profit << endl;
    int streak = 0;
    for (int i = 0; i < n; ++i) {
        ++streak;
        if (ms.find(a[i]) != ms.end()) {
            if (ms.size() > 1) { // Keep streak going 
                cout << streak << " ";
                ms.erase(ms.find(a[i]));
                streak = 0;
            }
        }
    }
    cout << streak;

}
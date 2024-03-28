#include <bits/stdc++.h>
using namespace std;

int main() {

    ifstream cin("angry.in");
    ofstream cout("angry.out");

    int N;
    cin >> N;

    vector<int> bales(N);
    for (int i = 0; i < N; ++i) {
        int bale;
        cin >> bale;
        bales[i] = bale;
    }



    sort(bales.begin(), bales.end());
    int maxBales = 0;
    for (int i = 0; i < N; ++i) {
        int currentBales = 0;
        int t = 0;
        int r = i;
        int sr = i;
        while (r < N && bales[r] - bales[sr] <= t) {  
            while (r < N && bales[r] - bales[sr] <= t) {
                ++r;
                ++currentBales;
            }
            ++t;
            sr = r - 1;
        }
        t = 0;
        int l = i;
        int sl = i;
        while (l >= 0 && bales[sl] - bales[l] <= t) {
            while (l >= 0 && bales[sl] - bales[l] <= t) {
                --l;
                ++currentBales;
            }
            ++t;
            sl = l + 1;
        }
        maxBales = max(maxBales, currentBales - 1);
    }
    cout << maxBales;
}
#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int n) {
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        answer += a[i];
    }
    return answer;
}


int main() {
    int d, sumTime;
    cin >> d >> sumTime;

    int minTimes[d];
    int maxTimes[d];
    for (int i = 0; i < d; ++i) { cin >> minTimes[i]; cin >> maxTimes[i]; }

    int sumMinTimes = sum(minTimes, d);
    int sumMaxTimes = sum(maxTimes, d);
    if (sumMinTimes <= sumTime && sumTime <= sumMaxTimes) {
        cout << "YES" << endl;
        int answer[d];
        for (int i = 0; i < d; ++i) answer[i] = minTimes[i];

        sumTime -= sumMinTimes;
        for (int i = 0; i < d; ++i) {
            if (sumTime > 0) {
                if (sumTime < maxTimes[i]) {
                    if (sumTime <= minTimes[i]) {
                        answer[i] = min(maxTimes[i], minTimes[i] + sumTime);
                    } else {
                        answer[i] = sumTime;
                        break;
                    }
                } else {
                    answer[i] = maxTimes[i];
                }
                sumTime -= (answer[i] - minTimes[i]);
            }
        }
        
        for (int i = 0; i < d - 1; ++i) cout << answer[i] << " ";
        cout << answer[d - 1];
    } else {
        cout << "NO" << endl;
    }

}
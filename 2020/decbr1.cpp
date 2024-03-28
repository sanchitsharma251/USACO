#include <bits/stdc++.h>
using namespace std;

int main() {
    // Find the minimum
    vector<int> answer;
    for (int i = 0; i < 7; ++i) {
        int u;
        cin >> u;
        answer.push_back(u);
    }
    sort(answer.begin(), answer.end());
    cout << answer[0] << " ";
    cout << answer[1] << " ";
    cout << answer[6] - answer[0] - answer[1];
}
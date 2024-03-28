#include <bits/stdc++.h>
using namespace std;

void printMapValues(map<int, vector<int>> mp) {
    for (auto x: mp) {
        cout << x.first << ": ";
        for (auto y: x.second) {
            cout << y << " ";
        }
        cout << endl;
    } 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Construct the map to hold the indices of occurences of element a[i]
        map<int, vector<int>> mp;
        for (int i = 0; i < n; ++i) {
            if (mp[a[i]].size() == 0) { 
                mp[a[i]].push_back(0);
            }
            mp[a[i]].push_back(i + 1);
        }
        for (int i = 1; i <= k; ++i) {
            if (mp.find(i) != mp.end())
                mp[i].push_back(n + 1);
        }


        int answer = INT_MAX;
        for (auto x: mp) {
            // Create a multiset to hold the differences
            multiset<int> ms;
            for (int i = 0; i < x.second.size() - 1; ++i) {
                ms.insert(x.second[i + 1] - x.second[i] - 1);
            }
            // Find the maximum difference and lower it
            int maximumDifference = (int)floor((*(--ms.end())) / 2.0);
            // Remove and add in the new difference
            ms.erase(--ms.end());
            ms.insert(maximumDifference);
            // Find the new minimum answer
            answer = min(answer, *(--ms.end()));
        }
        cout << answer << endl; 
    }
}
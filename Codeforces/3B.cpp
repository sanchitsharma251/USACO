#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;

    vector<pair<int, int>> vehicles;

    for (int i = 0; i < n; ++i) {
        int type, carryingCapacity;
        cin >> type >> carryingCapacity;
        vehicles.push_back({type, carryingCapacity});
    }

    

    // Sorted by carrying capacity
    // 2 7
    // 1 3
    // 1 2

    // Say 5 10
    // 1 13
    // 2 12
    // 1 12
    // 1 11
    // 1 9
    // 2 7

    // Consider possible sums... 1 -> 3, 2 -> 7, 3 -> 10, 4 -> 12
}
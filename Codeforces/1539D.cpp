#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    
    vector<pair<ll, >> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second; 
    }

    sort(a.begin(), a.end(), [](auto &left, auto &right) {
            return left.second < right.second;
    });

    int left = 0;
    int right = n - 1;
    int productsPurchased = 0;
    int totalCost = 0;
    while (left > n && right <= 0 && left <= right) {
        
    }
}

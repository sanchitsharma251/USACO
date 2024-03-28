#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool check(vector<int> bloomDay, int m, int k, int n, int days) {
        bool visited[n];
        for (int i = 0; i < n; ++i) visited[i] = (bloomDay[i] <= days);
        // Check to see if visited satsfies the m condition and k condition
        int currentBouquets = 0;
        int longestSubsequence = 0;
        for (int i = 0; i < n; ++i) {
            if (visited[i] == 1) { 
                ++longestSubsequence; 
            } else {
                longestSubsequence = 0;
            }
            if (longestSubsequence == k) {
                longestSubsequence = 0;
                ++currentBouquets;
            }
        }
        return (currentBouquets >= m);
    }
    int minDays(vector<int>& bloomDay, long long m, long long k) {
        long long n = bloomDay.size();
        long long mx = m * k;
        if (n < mx) return -1;
        int hi = 10e8;
        int lo = 0;
        int minimumDays = 10e8;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (check(bloomDay, m, k, n, mid)) {
                hi = mid - 1;
                minimumDays = min(minimumDays, mid);
            } else {
                lo = mid + 1;
            }
        }
        return minimumDays;
    }
};

int main() {
    Solution solution = Solution();
    vector<int> bloomDay = {1,10,2,9,3,8,4,7,5,6};
    int m = 4;
    int k = 2;
    cout << solution.minDays(bloomDay, m, k) << endl;
}
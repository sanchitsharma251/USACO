#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int> price, int k, int target) {
        int j = 0; // Check to see if this is a valid value
        --k;
        for (int i = 0; i < price.size(); ++i) {
            if (price[i] - price[j] >= target) {
                j = i;
                --k;    
            }
        }
        return (k <= 0);
    }
    int maximumTastiness(vector<int>& price, int k) {
        int n = price.size();
        sort(price.begin(), price.end());
        
        int lo = 0; // Lowest possible value of the answer
        int hi = price[n - 1] - price[0]; // Highest possible value of the answer
        int ans = 0; // The correct answer
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2; // Check the middle
            if (check(price, k, mid)) { // If the middle works, we can go bigger
                lo = mid + 1;
                ans = max(ans, mid);
                if (check(price, k, mid + 1) == false) break;
            } else { // Otherwise, we must go smaller
                hi = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> price =  { 13,5,1,8,21,2 };
    int k = 3;
    Solution solution = Solution();
    int answer = solution.maximumTastiness(price, k);
    cout << answer << endl;
}
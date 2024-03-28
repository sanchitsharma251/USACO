#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 0;
        int maximumSubsequences = 0;
        while (i < nums.size()) {
            if (j < nums.size() && nums[j] - nums[i] <= k) {
                ++j;
            } else {
                i = j;
                ++maximumSubsequences;
            }
        }
        return maximumSubsequences;
    }
};

int main() {
    Solution solution = Solution();
    vector<int> nums = {2,2,4,5};
    int k = 0;
    cout << solution.partitionArray(nums, k);
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> partitionLabels(string s) {
        map<char, int> letterOccurences;
        for (int i = 0; i < s.size(); ++i) {
            ++letterOccurences[s[i]];
        }
        vector<int> lengthOfSplits;
        map<char, int> currentOccurences;
        int currentLength = 0;
        for (int i = 0; i < s.size(); ++i) {
            ++currentLength;
            ++currentOccurences[s[i]];
            if (currentOccurences[s[i]] == letterOccurences[s[i]]) {
                currentOccurences.erase(s[i]);
            }
            if (currentOccurences.size() == 0) {
                lengthOfSplits.push_back(currentLength);
                currentLength = 0;
            }
        }
        return lengthOfSplits;
    }
};

int main() {
    Solution solution = Solution();
    vector<int> answer = solution.partitionLabels("eccbbbbdec");
    cout << "[";
    for (int i = 0; i < answer.size() - 1; ++i) {
        cout << answer[i] << ",";
    }
    cout << answer[answer.size() - 1] << "]" << endl;
}
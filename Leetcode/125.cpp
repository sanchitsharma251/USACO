#include <bits/stdc++.h>

class Solution {
	public:
		bool isPalindrome(std::string s) {
			// Remove all useless characters
			std::vector<char> newS;
			for (int i = 0; i < s.size(); ++i) {
				if (isalpha((char)tolower(s[i])) || isdigit(s[i])) {
					newS.push_back((char)tolower(s[i]));
				}
			}
			// Check if it's a palindrome by using two pointers
			// This takes O(n) time
			int l = 0;
			int r = newS.size() - 1;
			while (r >= l) {
				if (newS[r] != newS[l]) {
					return false;
				} else {
					++l;
					--r;
				}
			}
			return true;
		}
};


int main() {
	std::string s;
	std::cin >> s;
	Solution solution = Solution();
	std::cout << solution.isPalindrome(s) << std::endl;
}
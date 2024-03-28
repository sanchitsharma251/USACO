#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int trailingZeroes(int n) {
			int answer = 0;
			float c = 5;
			// Legendre's formula states that trailingZeroes(n) = floor(n / 5) + floor(n / 25) + ... until all values just become 0.
			while (c <= n) {
				answer += floor(n/c);
				c *= 5.0;
			}
			return answer;
		}
};


int main() {
	Solution solution = Solution();
	int n;
	cin >> n;
	cout << solution.trailingZeroes(n) << endl;
}
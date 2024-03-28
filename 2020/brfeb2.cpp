#include <bits/stdc++.h>
using namespace std;

int main() {

    ifstream fin("breedflip.in");
    ofstream fout("breedflip.out");

	int N;
	string A, B;

	fin >> N >> A >> B;

	int answer = 0;

	int current_substring = 0;
	for (int i = 0; i < N; ++i) {
		if (A[i] != B[i]) {
			++current_substring;
		} else {
			if (current_substring > 0) ++answer;
			current_substring = 0;
		}
	}
	if (current_substring > 0) ++answer;
	fout << answer;
}

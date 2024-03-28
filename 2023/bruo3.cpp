#include <bits/stdc++.h>
using namespace std;

int N, K, T;

void rotation(vector<int> &A, vector<int> B) {
	int prev = A[B[K - 1]];
	int p = 0;
	for (int i = 0; i < N; ++i) {
		if (p < K && B[p] == i) {
			int temp = A[B[p]];
			A[i] = prev;
			prev = temp;
			++p;
		}
	}
}

void shift(vector<int> &B) {
	for (int i = 0; i < K; ++i) {
		B[i] = (B[i] + 1) % N;
	}
	sort(B.begin(), B.end());
}


int main() {
	// ifstream cin("test.in");
	cin >> N >> K >> T;
	vector<int> A(N);
	vector<int> B(K);
	
	for (int i = 0; i < K; ++i) cin >> B[i];
	for (int i = 0; i < N; ++i) A[i] = i;
	
	vector<int> temp = A;
	for (int i = 0; i < T; ++i) {
		for (int i = 0; i < N - 1; ++i) cout << A[i] << " ";
		cout << A[N - 1] << endl;
		rotation(A, B);
		shift(B);
		if (A == temp) {
			cout << i << endl;	
		}
	}
	// for (int i = 0; i < N - 1; ++i) cout << A[i] << " ";
	// cout << A[N - 1];
}
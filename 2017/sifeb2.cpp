#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("maxcross.in");
    ofstream fout("maxcross.out");

	int N, K, B;
    fin >> N >> K >> B;

    vector<int> cost(N, 0);
    for (int i = 0; i < B; ++i) {
        int id;
        fin >> id;
		cost[id - 1] = 1;
    }

	vector<int> prefix_sum(N, 0);
	prefix_sum[0] = cost[0];
	for (int i = 1; i < N; ++i) {
		prefix_sum[i] += prefix_sum[i-1] + cost[i]; 
	}

	int answer = INT_MAX;	
	for (int i = K - 1; i < N; ++i) {
		answer = min(answer, prefix_sum[i] - prefix_sum[i - K + 1]);
	}

	fout << answer;
}

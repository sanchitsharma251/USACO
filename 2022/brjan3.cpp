#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long solve(int N, vector<int> hunger) {
    
    return -1;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        vector<int> hunger;
        for (int j = 0; j < N; ++j) {
            int hunger_level;
            cin >> hunger_level;
            hunger.push_back(hunger_level);
        }
        cout << solve(N, hunger) << endl;
    }
}
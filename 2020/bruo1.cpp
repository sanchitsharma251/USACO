#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int leftCowsOnEdge() {
    int answer = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] == '0') {
            ++answer;
        } else {
            break;
        }
    }
    return answer;
}

int rightCowsOnEdge() {
    int answer = 0;
    for (int i = N - 1; i > -1; --i) {
        if (S[i] == '0') {
            ++answer;
        } else {
            break;
        }
    }
    return answer;
}

vector<int> middleRanges(int left, int right) {

    vector<int> middle;
    int p = 0;
    for (int i = left; i < N - right; ++i) {
        if (i + 1 < N && S[i + 1] == '0') {
            ++p;
        } else {
            if (i + 1 != N)
                middle.push_back(p);
            p = 0;
        }
    }


    return middle;
}

int sameRange(int left, int right, vector<int> middle) {
    int answer = 0;
    // Check left range
    answer = max(int(floor(left/2.0)), answer);

    // Check right range
    answer = max(int(floor(right/2.0)), answer);

    // Check middle ranges
    for (int i = 0; i < middle.size(); ++i) {
        if (middle[i] % 3 == 0) {
            answer = max(answer, int(middle[i] / 3));
        }
        if (middle[i] % 3 == 1) {
            answer = max(answer, int((middle[i] - 1) / 3));
        }
        if (middle[i] % 3 == 2) {
            answer = max(answer, int((middle[i] + 1) / 3));
        }
    }

    return answer;
}

int differentRanges(int left, int right, vector<int> middle) {
    int answer = 0;
    answer = max(answer, min(left, right));
    if (middle.size() > 0) {
        answer = max(answer, min(int(ceil(middle[0] / 2.0)), left));
        answer = max(answer, min(int(ceil(middle[0] / 2.0)), right));
    }
    if (middle.size() > 1)
        answer = max(answer, min(int(ceil(middle[0] / 2.0)), int(ceil(middle[1] / 2.0))));

    return answer;

}

bool allZero() {
    for (int i = 0; i < N; ++i) {
        if (S[i] == '1') return false;
    }
    return true;
}

int main() {
    ifstream fin("socdist1.in");
    ofstream fout("socdist1.out");

    fin >> N >> S;
    if (!allZero()) {
        int left = leftCowsOnEdge();
        int right = rightCowsOnEdge();
        vector<int> middle = middleRanges(left, right);
        sort(middle.begin(), middle.end(), greater<int>());

        int answer = 0;
        answer = max(sameRange(left, right, middle), differentRanges(left, right, middle));
        if (middle.size() > 1) {
            answer = min(answer, middle[middle.size() - 1] + 1);
        }

        fout << answer;
    } else {
        fout << N - 1;
    }

}

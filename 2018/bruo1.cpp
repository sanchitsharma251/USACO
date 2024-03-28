#include <bits/stdc++.h>
using namespace std;

bool ValidWinner(char cowA, char cowB, char board[3][3]) {
    // Perform a sanity check to make sure they're both at least found once
    set<int> found;
    int rightDiagonal = 0;
    for (int i = 0; i < 3; ++i) {
        if (board[i][i] == cowA || board[i][i] == cowB) {
            ++rightDiagonal;
            found.insert(board[i][i]);
        }
        if (rightDiagonal == 3 && found.size() == 2) {
            return 1;
        }
    }

    found = {};
    int leftDiagonal = 0;
    for (int i = 0; i < 3; ++i) {
        if (board[i][2-i] == cowA || board[i][2-i] == cowB) {
            ++leftDiagonal;
            found.insert(board[i][2-i]);
        }
        if (leftDiagonal == 3 && found.size() == 2) {
            return 1;
        }
    }

    found = {};
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == cowA || board[i][0] == cowB) && (board[i][1] == cowA || board[i][1] == cowB) && (board[i][2] == cowA || board[i][2] == cowB)) {
            found.insert(board[i][0]);
            found.insert(board[i][1]);
            found.insert(board[i][2]);
            if (found.size() == 2) return 1;
            found = {};
        }
    }

    for (int i = 0; i < 3; ++i) {
        if ((board[0][i] == cowA || board[0][i] == cowB) && (board[1][i] == cowA || board[1][i] == cowB) && (board[2][i] == cowA || board[2][i] == cowB)) {
            found.insert(board[0][i]);
            found.insert(board[1][i]);
            found.insert(board[2][i]);
            if (found.size() == 2) return 1;
            found = {};
        }
    }
    return 0;
}

bool ValidWinner(char cow, char board[3][3]) {
    int rightDiagonal = 0;
    for (int i = 0; i < 3; ++i) {
        if (board[i][i] == cow) {
            ++rightDiagonal;
        }
        if (rightDiagonal == 3) {
            return 1;
        }
    }

    int leftDiagonal = 0;
    for (int i = 0; i < 3; ++i) {
        if (board[i][2-i] == cow) {
            ++leftDiagonal;
        }
        if (leftDiagonal == 3) {
            return 1;
        }
    }

    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == cow && board[i][1] == cow && board[i][2] == cow) {
            return 1;
        }
    }

    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == cow && board[1][i] == cow && board[2][i] == cow) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char board[3][3];
    ifstream fin("tttt.in");
    ofstream fout("tttt.out");

    for (int i = 0; i < 3; ++i) {
        string s;
        fin >> s;
        for (int j = 0; j < 3; ++j) {
            board[i][j] = s[j];
        }
    }

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int individualWinners = 0;
    int pairWinners = 0;
    for (auto cow: alphabet) {
        individualWinners += ValidWinner(cow, board);
    }
    fout << individualWinners << endl;

    for (int i = 0; i < 26; ++i) {
        for (int j = i + 1; j < 26; ++j) {
            pairWinners += ValidWinner(alphabet[i], alphabet[j], board);
        }
    }
    fout << pairWinners;
}
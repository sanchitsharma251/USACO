#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> generatePositions(int color, vector<vector<int>> board)
{
    int ty, by, rx, lx;
    vector<pair<int, int>> positions;

    int present = 0;
    for (auto row : board)
    {
        for (auto elem : row)
        {
            if (elem == color)
            {
                present = 1;
            }
        }
    }
    if (!present)
        return positions;

    for (int i = 0; i < board.size(); ++i)
    {
        bool found = false;
        for (int j = 0; j < board.size(); ++j)
        {
            if (board[i][j] == color)
            {
                ty = i;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    for (int i = board.size() - 1; i >= 0; --i)
    {
        bool found = false;
        for (int j = 0; j < board.size(); ++j)
        {
            if (board[i][j] == color)
            {
                by = i;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    for (int i = 0; i < board.size(); ++i)
    {
        bool found = false;
        for (int j = 0; j < board.size(); ++j)
        {
            if (board[j][i] == color)
            {
                lx = i;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    for (int i = board.size() - 1; i >= 0; --i)
    {
        bool found = false;
        for (int j = 0; j < board.size(); ++j)
        {
            if (board[j][i] == color)
            {
                rx = i;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    for (int i = ty; i <= by; ++i)
    {
        for (int j = lx; j <= rx; ++j)
        {
            positions.push_back({i, j});
        }
    }

    return positions;
}

int main()
{
    ifstream cin("art.in");
    ofstream cout("art.out");

    int N;
    cin >> N;
    vector<vector<int>> board;
    for (int i = 0; i < N; ++i)
    {
        string s;
        cin >> s;
        vector<int> row;
        for (int j = 0; j < N; ++j)
        {
            row.push_back(s[j] - '0');
        }
        board.push_back(row);
    }

    vector<vector<pair<int, int>>> colorPositions;
    for (int i = 1; i < 10; ++i)
    {
        colorPositions.push_back(generatePositions(i, board));
    }
    int answer = 0;
    for (int i = 1; i < 10; ++i)
    {
        bool valid = 1;
        vector<pair<int, int>> c1 = colorPositions[i - 1];
        if (c1.size() == 0)
            valid = 0;
        for (int j = 1; j < 10; ++j)
        {
            vector<pair<int, int>> c2 = colorPositions[j - 1];
            if (i != j)
            {
                for (int k = 0; k < c1.size(); ++k)
                {
                    for (int l = 0; l < c2.size(); ++l)
                    {
                        if (c1[k] == c2[l])
                        {
                            if (board[c1[k].first][c1[k].second] == i)
                            {
                                valid = 0;
                            }
                        }
                    }
                }
            }
        }
        answer += valid;
    }
    cout << answer;
}
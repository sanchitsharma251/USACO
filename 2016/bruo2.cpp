#include <bits/stdc++.h>
using namespace std;


void findHashtags(vector<string> grid) {
    // Returns the list of hashtags
    vector<vector<int, int>> coordinates;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == '#') {
                coordinates.push_back({i, j});
            }
        }
    }
}

// Given a list of hashtags, we must translate it over
// ....
// .#..
// .#..
// ##..

// {{1,1},{2,1},{3,0},{3,1}}
// Since the list will be sorted, we can just generate the list by taking len-max_y, len-max_x

vector<vector<vector<int, int>>> findTranslations(vector<vector<int, int>> coordinates, vector<string> grid) {
    int N = grid.size();
    vector<vector<vector<int, int>>> listOfTranslations;
    listOfTranslations.push_back(coordinates);
    int flag = true;
    while (flag) {
        // As soon as you find a new translation, just push it onto the list of translations
    }
}


int main() {

}
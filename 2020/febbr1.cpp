#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("triangles.in");
    ofstream fout("triangles.out");
    int N;
    fin >> N;
    vector<pair<int, int>> coordinates(N);
    for (int i = 0; i < N; ++i) {
        fin >> coordinates[i].first >> coordinates[i].second;
    }
    // Shoelace bash
    int answer = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                // We have three coordinates that we must ensure are in clockwise/counterclockwise order.
                // Shoelace goes like so
                // 1/2 *( )
                int x1 = coordinates[i].first;
                int y1 = coordinates[i].second;
                int x2 = coordinates[j].first;
                int y2 = coordinates[j].second;
                int x3 = coordinates[k].first;
                int y3 = coordinates[k].second;
                
                int area = abs((x1*y2+x2*y3+x3*y1)-(x1*y3+x2*y1+x3*y2));
                if (area == 0) continue;
                if ((x1 == x2 || x1 == x3 || x2 == x3) && (y1 == y2 || y1 == y3 || y2 == y3)) answer = max(answer, area);
            }
        }
    }
    fout << answer << endl;
}
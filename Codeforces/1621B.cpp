#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    int tt;
    cin >> tt;
    for (int i = 0; i < tt; ++i) {
        int n;
        cin >> n;
        vector<vector<int>> segments;
        for (int j = 0; j < n; ++j) {
            int l, r, c; 
            cin >> l >> r >> c;
            segments.push_back({l, r, c});    
        }
        int s = 0; // Segment which contains the smallest starting element
        int e = 0; // Segment which contains the largest starting element
        ll cost = segments[0][2]; // Current cost
        cout << cost << endl;
        for (int i = 1; i < n; ++i) {
            int l = segments[i][0];
            int r = segments[i][1];
            int c = segments[i][2];
            
            if (segments[s][0] > l && segments[e][1] < r) {
                cost = c;
                s = i;
                e = i;
                continue;
            }

           
             
           
        } 
         
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        string s;
        cin >> s;
        
        vector<int> z, o;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') z.push_back(a[i]);
            else o.push_back(a[i]);
        }
        
        vector<int> nz, no; 
        set<int> st, s2;
        for (int i = 1; i <= z.size(); ++i) st.insert(i);
        for (int i = 1; i <= z.size(); ++i) {
            auto it = st.lower_bound(z[i - 1]);
            if (*it != z[i - 1] && it != st.begin()) --it;
            nz.push_back(*it);
            st.erase(it);
        }

        for (int i = 1; i <= o.size(); ++i) {
            s2.insert(i + z.size());
        }        
        for (int i = 1; i <= o.size(); ++i) {
            auto it = s2.lower_bound(o[i - 1]);
            if (*it != o[i - 1] && it != s2.begin()) --it;
            no.push_back(*it);
            s2.erase(it);
        }

        int p1 = 0;
        int p2 = 0;
        vector<int> ans;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                ans.push_back(nz[p1]);
                ++p1;
            } else {
                ans.push_back(no[p2]);
                ++p2;
            }
        }

        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
}

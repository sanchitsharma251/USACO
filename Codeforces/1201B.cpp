#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5;
int a[maxN];

int main() {
   int n;
   cin >> n;
   for(int i = 0; i < n; ++i) cin >> a[i];

   sort(a, a + n);
   long long sum = a[0];
   int ans = 1; 
   for(int i = 1; i < n; ++i) {
       if(sum < a[i]) ans = 0;
       sum += a[i];
   }
   cout << (ans ? "YES": "NO") << endl; 
}

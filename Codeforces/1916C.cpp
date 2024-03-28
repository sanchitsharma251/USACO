#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while (t--) {
       int n;
       cin >> n;
       int A[n];
       for (int i = 0; i < n; ++i) cin >> A[i];

       ll pre[n];
       pre[0] = A[0];
       for (int i = 1; i < n; ++i) {
          pre[i] = pre[i - 1] + A[i]; 
       }

       int odd = 0;
       int even = 0;
       for (int i = 0; i < n; ++i) {
           sum += A[i];
           if (A[i] % 2 == 1) ++odd;
           else ++even;
           
           if (odd % 3 == 0) {
               pre[i] -= odd / 3;
           } else if (odd % 3 == 1) {
               if (odd > 1) {
                   pre[i] -= (odd + 2) / 3;
               } else {
                   if (even >= 1) --pre[i];
               } 
           } else {
               pre[i] -= (odd - 2) / 3; 
           }
           
       }
       for (int i = 0; i < n - 1; ++i) {
           cout << pre[i] << " ";
       }
       cout << pre[n - 1] << endl;
   } 
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

long long gcd(long long int a, long long int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 

long long lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (b % a == 0) {
            cout << b * b / a << endl;
        } else {
            cout << lcm(a, b) << endl;
        }
    }
}

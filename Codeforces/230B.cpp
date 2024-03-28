#include <bits/stdc++.h>
using namespace std;

 long long floorSqrt(long long x)
{
    // Base cases
    if (x == 0 || x == 1)
        return x;
 
    // Starting from 1, try all numbers until
    // i*i is greater than or equal to x.
    int i = 1, result = 1;
    while (result <= x) {
        i++;
        result = i * i;
    }
    return i - 1;
}

int main() {

    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[1000000 + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= 1000000; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= 1000000; i += p)
                prime[i] = false;
        }
    }

    int n;
    cin>>n;
    multiset<int> a; 
    for (int i=0;i<n;++i){
        int x;
        cin>>x;
        a.insert(x);
    }
    
    for (int i=2;i<=1000000;++i) {
        if (prime[i]) {
            if (a.find(prime[i]*prime[i])!=a.end()){
                
            }
        }
    }
}

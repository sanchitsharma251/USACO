#include<bits/stdc++.h>
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
using namespace std;
#define mod 1000000007
#define mod9 998244353
#define int long long
#define pi acos(-1)
#define fastttt std::ios::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL);
#define endl "\n"
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
long long pow2(long long a,long long b,long long m){
    long long ans=1;
    while(b>0){
        if(b&1){ans=(ans*a)%m;}
                a=(a*a)%m;
                b>>=1;}
    ans = (ans + m)%m;
    return ans;
}
long long pow2(long long a,long long b){
    long long ans=1;
    while(b>0){
        if(b&1){ans=(ans*a);}
                a=(a*a);
                b>>=1;
        }
    return ans;
}
void solve(){
	int n;
	cin>>n;
	vector<int> a,b;
	a.push_back(-1);b.push_back(-1);
	string ans = "YES";
	for(int i=  0;i < n;i++){
		int v;
		cin>>v;
		if(v%2){
			if(b.back() <= v)b.push_back(v);
			else ans = "NO";
		}
		else{
			if(a.back() <= v)a.push_back(v);
			else ans = "NO";
		}
	}
	cout<<ans<<endl;
}
int32_t main()
{
    fastttt
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

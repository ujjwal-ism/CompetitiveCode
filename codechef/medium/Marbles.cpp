#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

inline ll sol(ll n,ll r){
	if(n == r || r == 0) return 1;
	if(r == 1 || r == n-1) return n;

	ll ans = 1;
	ll x = n , y = 1;
	int count = 1;

	if(r > n/2)
		r = n-r;

	while(count <= r){
		ans *= x;
		ans /= y;
		x-- , y++;
		count++;
	}

	return ans;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		ll n,k;cin>>n>>k;
		cout<<sol(n-1,k-1)<<endl;
	}

	return 0;
}
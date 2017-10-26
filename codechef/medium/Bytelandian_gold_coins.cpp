#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

unordered_map<ll,ll> m;

ll sol(ll n){
	if(n/2 == 0 || n/3 == 0 || n/4 == 0)
		return n;
	if(m[n] != 0)
		return m[n];

	ll a,b,c;
	a = sol(n/2);
	b = sol(n/3);
	c = sol(n/4);

	return m[n] = max(n,a+b+c);
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	ll n;
	while(cin>>n){
		cout<<sol(n)<<endl;
	}

	return 0;
}
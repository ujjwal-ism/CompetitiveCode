#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

std::map<ll,ll> m;
ll f(ll n){
	if(n==0)
		return 0;
	if(m[n]!=0)
		return m[n];
	m[n] = max(n,f(n/2)+f(n/3)+f(n/4));

	return m[n];
}

int main()
{
	ll n;
	while(cin>>n){
		cout<<f(n)<<endl;
	}

	return 0;
}
#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
typedef long ll;

vector<ll> d(MAX+1);

void sieveofErato(vector<ll> &primes)	{
	ll n = MAX;
	bool p[n+1];
	memset(p,true,sizeof(p));

	for(ll i=2;i*i<=n;i++)	{
		if(p[i]==true)	{
			for(int j = i*2;j<=n;j+=i)
				p[j] = false;
		}
	}

	for(ll i=2;i<=n;i++){
		if(p[i])
			primes.push_back(i);
	}
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	vector<ll> primes;
	sieveofErato(primes);

	ll temp,sum;
	for(ll i=1;i<=MAX;i++){
		temp = i;
		sum = i;
		while(temp){
			sum += temp%10;
			temp /= 10;
		}
		d[i] = sum;
	}
	
	sort(d.begin(),d.end());
	vector<ll> sol;
	for(ll i=1;i<=MAX;i++){
		if(!binary_search(d.begin(),d.end(),i) && binary_search(primes.begin(),primes.end(),i))
			sol.push_back(i);
	}
	int q;cin>>q;
	ll a,b; 
	while(q--){
		cin>>a>>b;
		int u = lower_bound(sol.begin(),sol.end(),b) - sol.begin();
		if(sol[u]==b) u++;
		int v = lower_bound(sol.begin(),sol.end(),a) - sol.begin();
		cout<<u - v<<"\n"; 
	}

	return 0;
}
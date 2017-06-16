#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void sieveofErato(vector<int> &primes)	{
	int n = 100000;
	bool p[n+1];
	memset(p,true,sizeof(p));

	for(int i=2;i*i<=n;i++)	{
		if(p[i]==true)	{
			for(int j = i*2;j<=n;j+=i)
				p[j] = false;
		}
	}

	for(int i=2;i<=n;i++){
		if(p[i])
			primes.push_back(i);
	}
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	vector<int> primes;
	sieveofErato(primes);
	int l = primes.size();
	
	vector<ll> sol(l);
	for(int i=0;i<l;i++){
		sol[i] = (ll)primes[i]*(ll)primes[i];
	}

	int t;cin>>t;
	ll n,k;
	while(t--){
		cin>>n>>k;
		int ans = lower_bound(sol.begin(),sol.end(),n) - sol.begin();
		if(sol[ans]==n) ans++;
		int a = lower_bound(sol.begin(),sol.end(),k) - sol.begin();
		if(sol[a]==k) a++;

		if(ans - a <= 0)
			cout<<ans<<" 0\n";
		else
			cout<<ans<<" "<<ans-a<<"\n";

	}	

	return 0;
}
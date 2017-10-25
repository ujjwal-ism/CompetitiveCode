#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;


int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll a = sqrt(n);
		ll ans = 0;
		
		for(int i=2;i<=a;i++){
			if(n%i == 0)
				ans += (i + n/i);
		}

		if(a*a == n)
			ans -= a;
		cout<<ans+1<<endl;
	}

	return 0;
}
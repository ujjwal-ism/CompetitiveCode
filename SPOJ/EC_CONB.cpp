#include <bits/stdc++.h>

using namespace std;
typedef long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t,n;cin>>t;
	while(t--){
		cin>>n;
		if(n%2==1){
			cout<<n<<"\n"; continue;
		}
		vector<ll> v;
		while(n){
			if(n%2==1){
				v.push_back(1);
				n /= 2;
			}
			else{
				v.push_back(0);
				n /= 2;
			}
		}
		ll ans = 0;
		int q = v.size();
		int j = 0;
		for(int i=q-1;i>=0;i--,j++)
			ans += v[i]*pow(2,j);

		cout<<ans<<"\n";
	}
	return 0;
}
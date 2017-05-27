#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,q;cin>>n>>q;
	vector<ll> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	ll t;
	vector<ll>::iterator it;
	while(q--){
		cin>>t;
		it = lower_bound(v.begin(),v.end(),t);
		if(v[it-v.begin()] != t)
			cout<<"-1"<<"\n";
		else
			cout<<it-v.begin()<<"\n";
	}	
	return 0;
}
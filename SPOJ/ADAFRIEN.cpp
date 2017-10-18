#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	int q,k;cin>>q>>k;
	unordered_map<string,ll> m;
	for(int i=0;i<q;i++){
		string s;ll e;
		cin>>s>>e;
		m[s] += e;
	}

	vector<ll> v;
	unordered_map<string,ll>::iterator it;
	for(it = m.begin();it != m.end(); it++){
		v.push_back(it->second);
	}
	
	sort(v.begin(),v.end(),greater<ll>());
	int l = v.size();
	int i = 0;
	ll ans = 0;
	while(i < k && i < l ){
		ans += v[i];
		i++;
	}
	cout<<ans;

	return 0;
}
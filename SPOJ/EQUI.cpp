#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;
	while(1){
		cin>>n;
		if(n==-1) break;

		unordered_map<ll,int> m;
		vector<ll> v(n-1);
		for(int i=0;i<n-1;i++){
			cin>>v[i];
			m[v[i]] = 1;
		}
		sort(v.begin(),v.end());

		ll sum = accumulate(v.begin(),v.end(),0);
		int ans = 0;

		ll t = sum/(n-1);
		if((n-1)*t == sum && t < v[n/2] && t > v[(n/2)-1]) ans++;

		t = n*v[n/2] - sum;
		if(!m[t] && t > v[n/2]) ans++;

		t = n*v[(n/2)-1] - sum;
		if(!m[t] && t < v[(n/2)-1]) ans++;

		cout<<ans<<"\n";
	}	
	return 0;
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n,u;cin>>n>>u;
		ll arr[n+1],a[n];
		for(int i=0;i<=n;i++)
			arr[i] = 0;
		
		int l,e,val;
		for(int i=0;i<u;i++){
			cin>>l>>e>>val;
			arr[l] += val;
			arr[e+1] -= val;
		}
		ll s = 0;
		for(int i=0;i<n;i++){
			s += arr[i];
			a[i] = s;
		}
		int q;cin>>q;
		for(int i=0;i<q;i++){
			cin>>l;
			cout<<a[l]<<"\n";
		}
	}	

	return 0;
}
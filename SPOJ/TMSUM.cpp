#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;

	while(t--){
		int n;cin>>n;
		vector<int> v(n);

		for(int i=0;i<n;i++) cin>>v[i];

		if(n == 1)
			cout<<v[0]<<"\n";

		else if(n == 2)
			cout<<max(v[0]*v[1],v[0]+v[1])<<"\n";

		else{
			sort(v.begin(),v.end());
			ll sum[n];
			sum[0] = v[0];
			sum[1] = max(v[0]*v[1],v[0]+v[1]);
			
			for(int i=2;i<n;i++)
				sum[i] = max(sum[i-2]+(v[i]*v[i-1]),sum[i-1]+v[i]);

			cout<<sum[n-1]<<"\n";
		}
	}

	return 0;
}
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
		int a[n] , b[n];

		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];

		vector<int> v;
		int ans = 0;
		ll sum = 0;
		for(int i=0;i<n;i++){
			int q = a[i] - b[i];
			if(q >= 0){
				ans++;
				sum += q;
			}
			else
				v.push_back(-1*q);
		}

		sort(v.begin(),v.end());
		int l = (v.empty())? 0 : v.size();
		for(int i=0;i<l;i++){
			if(v[i] > sum) break;
			ans++;
			sum = sum - v[i];
		}

		cout<<ans<<"\n";
	}

	return 0;
}
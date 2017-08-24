#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	
	vector<ll> v(n);
	for(int i=0;i<n;i++) cin>>v[i];

	int dp[n];
	dp[0] = 1;
	for(int i=1;i<n;i++){
		if(v[i] >= v[i-1])
			dp[i] = dp[i-1]+1;
		else
			dp[i] = 1;
	}
	int ans = dp[0];
	for(int i=1;i<n;i++){
		if(ans < dp[i])
			ans = dp[i];
	}

	cout<<ans;

	return 0;
}
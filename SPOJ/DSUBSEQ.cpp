#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;

ll countSub(string s){
	int n = s.length();
	ll dp[n+1];
	vector<ll> prev(256,-1);

	dp[0] = 1;

	for(int i=1;i<=n;i++){
		dp[i] = (2*dp[i-1])%mod;
		if(prev[s[i-1]]!=-1)
			dp[i] = (dp[i] - dp[prev[s[i-1]]] + mod)%mod ;
		prev[s[i-1]] = i-1;
	}
	return dp[n];
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	string s;
	while(t--){
		cin>>s;
		cout<<countSub(s)<<"\n";
	}
	return 0;
}
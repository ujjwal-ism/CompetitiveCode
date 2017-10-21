#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;


int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,k;cin>>n>>k;

	ll dp[100005] , sum[100005];
	for(int i=0;i<k;i++){
		dp[i] = 1;
		sum[i] = i+1;
	}

	for(int i=k;i<100005;i++){
		dp[i] = ((dp[i-1]%mod) + (dp[i-k]%mod))%mod;
		sum[i] = ((sum[i-1]%mod) + (dp[i]%mod))%mod;
	}

	while(n--){
		int a,b;cin>>a>>b;
		ll ans = sum[b] - sum[a-1];
		if(ans < 0) ans += mod;
		cout<<ans<<endl;
	}

	return 0;
}
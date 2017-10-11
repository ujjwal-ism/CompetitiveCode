#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

#define gc getchar_unlocked

void si(ll &x){
    register ll c = gc();
    x = 0;
    ll neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t = 1;
	while(1){
		int n;cin>>n;
		if(n == 0) break;

		ll arr[n][3];
		for(int i=0;i<n;i++){
			si(arr[i][0]);si(arr[i][1]);si(arr[i][2]);
		}

		ll dp[n][3];
		dp[0][0] = 0 , dp[0][1] = arr[0][1] , dp[0][2] = dp[0][1] + arr[0][2];
		if(n > 1){
			dp[1][0] = dp[0][1]+arr[1][0];
			dp[1][1] = min(dp[1][0],min(dp[0][1],dp[0][2])) + arr[1][1];
			dp[1][2] = min(dp[1][1],min(dp[0][1],dp[0][2])) + arr[1][2];
		}

		for(int i=2;i<n;i++){
			dp[i][0] = min(dp[i-1][0],dp[i-1][1]) + arr[i][0];
			dp[i][1] = min(dp[i][0],min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]))) + arr[i][1];
			dp[i][2] = min(dp[i][1],min(dp[i-1][1],dp[i-1][2])) + arr[i][2];
		}

		printf("%d. %lld\n",t,dp[n-1][1]);
		t++;
	}

	return 0;
}
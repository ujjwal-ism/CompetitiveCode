#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int p[105];
int sum[105][105];
ll dp[105][105];

ll sol(int i,int j){
	if(dp[i][j] != -1)
		return dp[i][j];

	ll min = INT_MAX;
	ll count;

	for(int k=i;k<j;k++){
		count = sol(i,k) + sol(k+1,j) + sum[i][k]*sum[k+1][j];
		if(count < min)
			min = count; 
	}
	return dp[i][j] = min;
}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n;
	while(scanf("%d",&n) == 1){
		memset(dp,-1,sizeof(dp));

		for(int i=0;i<n;i++) {
			scanf("%d",&p[i]);
			sum[i][i] = p[i];
			dp[i][i] = 0;
		}

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				sum[i][j] = (sum[i][j-1] + p[j])%100;
			}
		}


		ll ans = sol(0,n-1);
		printf("%lld\n",ans );
	}

	return 0;
}
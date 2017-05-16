#include <bits/stdc++.h>

using namespace std;

int dp[2001][2001];
int n;
int v[2001];

int profit(int s,int e){
	if( s > e)
		return 0 ;
	if(dp[s][e] != -1)
		return dp[s][e];

	int y = n - (e - s) ;

	return dp[s][e] = max(profit(s+1, e) + y*v[s], profit(s, e-1) + y*v[e]);
}

int main(int argc, char const *argv[])
{
	scanf("%d",&n);
	for(int i = 1;i<=2000;i++){
		for(int j = 1;j<=2000;j++)
			dp[i][j] = -1;
	}
	for(int i = 1;i<=n;i++)
		scanf("%d",v + i);

	printf("%d",profit(1,n));

	return 0;
}
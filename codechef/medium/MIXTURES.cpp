#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int p[105];
int dp[105][105];
int color[105][105];

int sol(int i,int j){
	if(dp[i][j] != -1)
		return dp[i][j];

	int min = INT_MAX;
	int count;

	for(int k = i;k < j;k++){
		count = sol(i,k) + sol(k+1,j) + color[i][k]*color[k+1][j];
		if(count < min)
			min = count;
	}

	return dp[i][j] = min;
}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;
	while(scanf("%d",&n) == 1){
		memset(dp,-1,sizeof(dp));

		for(int i = 0;i < n; i++){
			scanf("%d",&p[i]);
			color[i][i] = p[i];
			dp[i][i] = 0;
		}

		for(int i = 0;i < n; i++){
			for(int j = i+1;j < n; j++){
				color[i][j] = (color[i][j-1] + p[j])%100;
			}
		}

		printf("%d\n",sol(0,n-1));
	}

	return 0;
}
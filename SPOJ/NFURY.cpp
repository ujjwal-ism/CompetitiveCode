#include <bits/stdc++.h>
#define MAX 1001
using namespace std;
int dp[MAX],q;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	dp[0] = 0,dp[1] = 1,dp[2] = 2,dp[3] = 3;
	for(int i=4;i<MAX;i++){
		q = INT_MAX;
		for(int j=1;j*j<=i;j++){
			if(j*j == i) dp[i] = 1;
			else
				q = min(dp[i-j*j]+1,q);
		}
		if(dp[i]!=1) dp[i] = q;
	}

	int t,n;cin>>t;
	while(t--){
		cin>>n;
		cout<<dp[n]<<"\n";
	}
	return 0;
}
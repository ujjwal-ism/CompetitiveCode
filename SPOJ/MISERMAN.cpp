#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;cin>>n>>m;
	int arr[n][m],dp[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0)
				dp[i][j] = arr[i][j];
			else if(j==0)
				dp[i][j] = arr[i][j] + min(dp[i-1][j],dp[i-1][j+1]);
			else if(j == m-1)
				dp[i][j] = arr[i][j] + min(dp[i-1][j],dp[i-1][j-1]);
			else
				dp[i][j] = arr[i][j] + min(min(dp[i-1][j-1],dp[i-1][j+1]),dp[i-1][j]);
		}
	}
	int min = dp[n-1][0];
	for(int i=1;i<m;i++)
		if(dp[n-1][i]<min)
			min = dp[n-1][i];

	cout<<min<<endl;

	return 0;
}
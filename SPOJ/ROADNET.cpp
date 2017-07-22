#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		int cost[n+1][n+1], dp[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>cost[i][j];
				dp[i][j] = cost[i][j];
			}
		}

		for(int k=1;k<=n;k++){
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(dp[i][k]+dp[k][j] <= dp[i][j]){
						dp[i][j] = dp[i][k] + dp[k][j];
						if(i != j && k != j && k != i)
							cost[i][j] = -1;
					}
				}
			}
		}

		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(cost[i][j] != -1 && i != j)
					cout<<i<<" "<<j<<"\n";
			}
		}
	}	
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,h,w;cin>>t;
	while(t--){
		cin>>h>>w;
		int arr[h][w];
		int dp[h][w];
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(i==0)
					dp[i][j]=arr[i][j];
				else if(j==0)
					dp[i][j]=arr[i][j] + max(dp[i-1][j],dp[i-1][j+1]);
				else if(j==w-1)
					dp[i][j]=arr[i][j] + max(dp[i-1][j],dp[i-1][j-1]);
				else
					dp[i][j]=arr[i][j] + max(max(dp[i-1][j],dp[i-1][j+1]),dp[i-1][j-1]);
			}
		}
		int max = dp[h-1][0];
		for(int i=1;i<w;i++){
			if(dp[h-1][i]>max)
				max = dp[h-1][i];
		}
		cout<<max<<endl;
	}

	return 0;
}
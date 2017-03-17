#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int w,n;
	while(1){
		cin>>w>>n;
		if(w==0 && n==0)
			break;
		int dp[n][w+1];
		vector< pair<int,int> > v(n);
		for(int i=0;i<n;i++){
			cin>>v[i].first;
			cin>>v[i].second;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<=w;j++){
				if(j==0)
					dp[i][j]=0;
				else if(i==0){
					if(j<v[i].first)
						dp[i][j]=0;
					else
						dp[i][j]=v[i].second;
				}
				else if(v[i].first>j)
					dp[i][j]=dp[i-1][j];

				else
					dp[i][j]=max(v[i].second+dp[i-1][j-v[i].first],dp[i-1][j]);
			}
		}

		int m=9999999,val=-1;
		for(int i=0;i<=w;i++){
				if(dp[n-1][i] == val && i<m)
					m = i;
				else if(dp[n-1][i]>val){
					val = dp[n-1][i];m = i;
				}
		}
		cout<<m<<" "<<val<<endl;
	}
	return 0;
}
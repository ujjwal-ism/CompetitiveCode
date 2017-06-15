#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,temp;cin>>t;
	while(t--){
		vector<int> a;
		while(1){
			cin>>temp;
			if(temp == 0) break;
			a.push_back(temp);
		}
		int n = a.size();
		int ma = -1;
		
		while(1){
			vector<int> tom;
			while(1){
				cin>>temp;
				if(temp == 0) break;
				tom.push_back(temp);
			}

			if(tom.empty()) break;

			int m = tom.size();
			int dp[n+1][m+1];

			for(int i=0;i<=n;i++){
				for(int j=0;j<=m;j++){
					if(i == 0 || j == 0)
						dp[i][j] = 0;
					else if(a[i-1] == tom[j-1])
						dp[i][j] = dp[i-1][j-1] + 1;
					else
						dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				}
			}
			if(dp[n][m] > ma)
				ma = dp[n][m];
		}
		cout<<ma<<"\n";
	}
	
	return 0;
}
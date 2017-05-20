#include <bits/stdc++.h>
#define MAX 999999
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		int w = b - a;
		int n;cin>>n;
		vector<pair<int,int> > v(n);

		for(int i=0;i<n;i++){
			cin>>v[i].first;
			cin>>v[i].second;
		}

		int dp[w+1];
		dp[0] = 0;
		for(int i=1;i<=w;i++){
			int q = MAX;
			for(int j=0;j<n;j++){
				if(i - v[j].second >= 0){
					if(dp[i-v[j].second] != -1)
					   q = min(q,dp[i-v[j].second] + v[j].first);
				}
			}
			if(q == MAX)
				dp[i] = -1;
			else
				dp[i] = q;
		}
		if(dp[w]==-1)
			cout<<"This is impossible.\n";
		else
			cout<<"The minimum amount of money in the piggy-bank is "<<dp[w]<<".\n";
	}

	return 0;
}
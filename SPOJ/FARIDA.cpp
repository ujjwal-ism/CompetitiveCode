#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
int main(int argc, char const *argv[])
{
	int t,n;scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		if(n>1){
			int a[n];
			ll dp[n];
			for(int j=0;j<n;j++){
			scanf("%d",&a[j]);
			}
			dp[0] = a[0]; dp[1] = max(a[0],a[1]);
			for(int j=2;j<n;j++)
				dp[j] = max(dp[j-1],a[j]+dp[j-2]);

			printf("Case %d: %llu\n",i,dp[n-1]);
		}
		else if(n==0)
			printf("Case %d: 0\n",i);
		else{
			int m;cin>>m;
			printf("Case %d: %d\n",i,m);
		}
	}
	return 0;
}
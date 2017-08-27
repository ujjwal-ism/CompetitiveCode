#include <bits/stdc++.h>
#define MAX 1000
using namespace std;
typedef long long ll;

ll dp[MAX][MAX];

ll sol(int n,int m,ll t){
	if(dp[n][m] != -1)
		return dp[n][m];

	if((n <= 1 && m <= 1) || n == 0 || m == 0)
		return dp[n][m] = t;
	
	ll t1 = INT_MIN , t2 = INT_MIN;

	if(n == 1)
		t1 = sol(n+1,m-2,t+1);
	else if(m == 1)
		t2 = sol(n-2,m+1,t+1);
	else{
		t1 = sol(n+1,m-2,t+1);
		t2 = sol(n-2,m+1,t+1);
	}

	return dp[n][m] = max(t1,t2);
}

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,m;cin>>n>>m;
	memset(dp,-1,sizeof(dp));

	cout<<sol(n,m,0);

	return 0;
}
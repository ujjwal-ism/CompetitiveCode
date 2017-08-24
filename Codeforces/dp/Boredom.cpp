#include <bits/stdc++.h>
#define MAX 100009
using namespace std;
typedef long long ll;

ll c[MAX] = {0};
ll dp[MAX];

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		c[t]++;
	}

	dp[0] = 0;
	dp[1] = c[1];

	for(int i=2;i<MAX;i++)
		dp[i] = max(dp[i-1] , i*c[i] + dp[i-2]);

	cout<<dp[MAX-1];

	return 0;
}
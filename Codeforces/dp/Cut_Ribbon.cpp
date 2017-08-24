#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n,a,b,c;

int dp[4005];

int sol(int n){
	if(dp[n] != -1)
		return dp[n];

	if(n == 0)
		return dp[n] = 1;
	if(n < a && n < b && n < c)
		return dp[n] = INT_MIN;

	int x = INT_MIN;
	if(n >= a)
		x = 1 + sol(n-a);

	int y = INT_MIN;
	if(n >= b)
		y = 1 + sol(n-b);

	int z = INT_MIN;
	if(n >= c)
		z = 1 + sol(n-c);

	return dp[n] = max(x,max(y,z));

}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	memset(dp,-1,sizeof(dp));

	cin>>n>>a>>b>>c;
	cout<<sol(n)-1;

	return 0;
}
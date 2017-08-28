#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	
	int n;cin>>n;
	ll arr,prev ;
	int dp , ans;
	cin>>arr;
	dp = 1 , ans = 1;
	prev = arr;

	for(int i=1;i<n;i++){
		cin>>arr;
		if(arr > prev){
			dp = dp+1;
			if(dp > ans) ans = dp;
		}
		else
			dp = 1;
		prev = arr;
	}
	cout<<ans;

	return 0;
}
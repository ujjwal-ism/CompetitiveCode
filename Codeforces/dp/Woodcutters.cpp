#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	ll x[n] , h[n];

	for(int i=0;i<n;i++) cin>>x[i]>>h[i];

	int ans = 0;
	for(int i=1;i<n-1;i++){
		if( (x[i] - x[i-1]) > h[i] ){
			ans++;
		}
		else if((x[i+1] - x[i]) > h[i]){
			ans++;
			x[i] += h[i];
		}
	}
	if(n == 1)
		cout<<ans+1;
	else
		cout<<ans+2;

	return 0;
}
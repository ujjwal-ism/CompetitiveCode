#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		ll a[n] , b[n];
		for(int i=0;i<n;i++) cin>>a[i];

		for(int i=0;i<n;i++) cin>>b[i];

		int count = 1;
		int prev = min(a[0],b[0]);
		for(int i=1;i<n;i++){
			if(a[i] <= b[i] && a[i] >= prev){
				count++;
				prev = a[i];
			}
			else if(a[i] >= b[i] && b[i] >= prev){
				count++;
				prev = b[i];
			}
			else if(a[i] >= prev){
				count++;
				prev = a[i];
			}
			else if(b[i] >= prev){
				count++;
				prev = b[i];
			}
			else
				break;
		}
		if(count == n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

	return 0;
}
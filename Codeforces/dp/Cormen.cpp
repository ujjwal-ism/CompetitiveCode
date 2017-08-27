#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,k;cin>>n>>k;
	int arr[n];

	for(int i=0;i<n;i++) cin>>arr[i];

	int ans = 0;
	
	for(int i=1;i<n;i++){
		if( arr[i] + arr[i-1] < k){
			ans += k - arr[i] - arr[i-1];
			arr[i] = k - arr[i-1];
		}
	}

	cout<<ans<<"\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	return 0;
}
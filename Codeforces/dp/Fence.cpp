#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,k;cin>>n>>k;
	int arr[n];
	ll sum = 0;
	ll ans;
	int idx;

	for(int i=0;i<n;i++) cin>>arr[i];

	for(int i=0;i<k;i++)
		sum += arr[i];

	ans = sum;
	idx = 1;

	for(int i=k;i<n;i++){
		sum = sum + arr[i] - arr[i-k];
		if(sum < ans) { 
			ans = sum;
			idx = i-k+2;
		}
	}

	cout<<idx;

	return 0;
}
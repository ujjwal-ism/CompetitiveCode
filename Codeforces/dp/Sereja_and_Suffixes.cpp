#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	unordered_map<int,int> m;
	int n,k;cin>>n>>k;
	int arr[n] , dist[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	m[arr[n-1]] = 1;
	dist[n-1] = 1;

	for(int i=n-2;i>=0;i--){
		if(m[arr[i]])
			dist[i] = dist[i+1];
		else{
			m[arr[i]] = 1;
			dist[i] = 1 + dist[i+1];
		}
	}
	int t;
	for(int i=0;i<k;i++){
		cin>>t;
		cout<<dist[t-1]<<"\n";
	}

	return 0;
}
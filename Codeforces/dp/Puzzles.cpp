#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,m;cin>>n>>m;
	vector<int> v(m);
	for(int i=0;i<m;i++) cin>>v[i];

	sort(v.begin(),v.end());
	
	int ans = INT_MAX;
	int i = 0 , j = n-1;
	while(j < m){
		if(v[j] - v[i] < ans)
			ans = v[j] - v[i];
		i++;
		j++;
	}
	cout<<ans;

	return 0;
}
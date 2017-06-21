#include <bits/stdc++.h>

using namespace std;
typedef long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll a[9];
	for(int i=1;i<=8;i++) cin>>a[i];

	int n,x,y;cin>>n;
	vector<int> v[9];
	for(int i=0;i<n;i++){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	ll ans = -1;
	ll temp;
	for(int i=1;i<256;i++){
		temp = 0;
		vector<int> g;
		int safe = 1;
		for(int j=0;j<8;j++){
			if(i&(1<<j))
				g.push_back(j+1);
		}

		int l = g.size();
		for(int x=0;x<l;x++){
			for(int j=x+1;j<l;j++){
				int a = v[g[x]].size();
				for(int k=0;k<a;k++){
					if(v[g[x]][k]==g[j]) safe = 0;
				}
			}
		}


		if(safe == 1){
			int l = g.size();
			for(int i=0;i<l;i++)
				temp += a[g[i]];
			ans = max(ans,temp);
		}
	}

	cout<<ans;

	return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n,a,b;cin>>n;
		int f = (n*(n-1))/2;
		vector<int> v[n+1];

		for(int i=0;i<f;i++){
			cin>>a>>b;
			v[a].push_back(b);
		}

		set<int> list[n+1];
		for(int i=1;i<=n;i++){
			a = v[i].size();
			for(int j=0;j<a;j++){
				list[i].insert(v[i][j]);
				b = v[v[i][j]].size();
				for(int z=0;z<b;z++)
					list[i].insert(v[v[i][j]][z]);
			}
		}

		int idx,val;
		idx = 1,val = list[1].size();
		for(int i=2;i<=n;i++){
			a = list[i].size();
			if(a > val){
				val = a;
				idx = i;
			}
		}
		cout<<idx<<" "<<val<<"\n";
	}	
	return 0;
}
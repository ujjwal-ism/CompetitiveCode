#include <bits/stdc++.h>

using namespace std;

vector <int> adj[2001];
int g[2001];

bool dfs(int v){
	int t = adj[v].size();
	bool r = true;
	for(int i=0;i<t;i++){
		int q = adj[v][i];
		if(g[v] == g[q]) return false;
		if(g[q]==0){
			g[q] = -1*g[v];
			r = r && dfs(adj[v][i]);
		}
	}
	return r;
}

int main()
{
	std::ios::sync_with_stdio(false);

	int t;cin>>t;
	int v,e;
	for(int z=1;z<=t;z++){
		cin>>v>>e;
		for(int i = 1;i<=v;i++){
			g[i] = 0;
			adj[i].clear();
		}

		int x,y;
		for(int i=0;i<e;i++){
			cin>>x>>y;
     		adj[x].push_back(y);
     		adj[y].push_back(x);
		}
		cout<<"Scenario #"<<z<<":\n";

		int r = true;
		for(int i=1;i<=v;i++){
			if(g[i] == 0){
				g[i] = 1; //male
				r = r && dfs(i);
				if(r==false)
					break;
			}
		}

		if(r)
			cout<<"No suspicious bugs found!\n";
		else
			cout<<"Suspicious bugs found!\n";
	}

	return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define INF 100005

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;
typedef pair<int,int> ip;

int n,m;
vector<int> adj[10005];

int dijkstra(){
	priority_queue<ip, vector<ip>, greater<ip> > pq;

	vector<int> dist(n,INF);

	dist[0] = 0;
	pq.push(make_pair(0,0));

	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();

		int size = adj[u].size();
		for(int i=0;i<size;i++){
			if(dist[adj[u][i]] > dist[u] + 1){
				dist[adj[u][i]] = dist[u] + 1;
				pq.push(make_pair(dist[adj[u][i]],adj[u][i]));
			}
		}
	}

	return dist[n-1];
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t,u,v;cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<10005;i++) adj[i].clear();

		for(int i=0;i<m;i++){
			cin>>u>>v;u--,v--;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		cout<<dijkstra()<<endl;
	}

	return 0;
}
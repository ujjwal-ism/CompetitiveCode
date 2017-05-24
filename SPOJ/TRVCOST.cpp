#include <bits/stdc++.h>

using namespace std;

class Graph{
	int v;
	list< pair<int,int> > *adj;
public:
	Graph(int);
	void addEdge(int,int,int);
	void dijkstra(int);
};

Graph::Graph(int v){
	this->v = v;
	adj = new list< pair<int,int> >[v];
}

void Graph::addEdge(int u,int v,int w){
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));
}
vector<int> dist(501);

/*Dijkstra implementation using STL   */
void Graph::dijkstra(int src){
	set< pair<int,int> > setds;

	setds.insert(make_pair(0,src));
	dist[src] = 0;

	while(!setds.empty()){
		pair<int,int> temp = *(setds.begin());
		setds.erase(setds.begin());

		int u = temp.second;
		list< pair<int,int> >::iterator it;

		for(it=adj[u].begin();it!=adj[u].end();it++){
			int v = (*it).first;
			int w = (*it).second;

			if(dist[v]>dist[u]+w){
				if(dist[v]!=INT_MAX)
					setds.erase(setds.find(make_pair(dist[v],v)));
				dist[v] = dist[u]+w;
				setds.insert(make_pair(dist[v],v));
			}
		}
	}

}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	Graph g(501);
	int n;cin>>n;
	int u,v,w;
	for(int i=0;i<n;i++){
		cin>>u>>v>>w;
		g.addEdge(u,v,w);
	}
 	
 	int s;cin>>s;
 	for(int i=0;i<501;i++)
 		dist[i] = INT_MAX;
    g.dijkstra(s);

    int t,q;cin>>t;
    while(t--){
    	cin>>q;
    	if(q > 500 || dist[q] == INT_MAX){
    		cout<<"NO PATH\n";
    	}else{
    		cout<<dist[q]<<"\n";
    	}

    }
	return 0;
}
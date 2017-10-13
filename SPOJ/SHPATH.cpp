#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> iPair;

#define gc getchar_unlocked

inline void si(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

class Graph{
	int v;
	vector< pair<int,int> > *adj;
public:
	Graph(int);
	void addEdge(int,int,int);
	int dijkstra(int,int);
};

Graph::Graph(int v){
	this->v = v;
	adj = new vector< pair<int,int> >[v];
}

void Graph::addEdge(int u,int v,int w){
	adj[u].push_back(make_pair(v,w));
}
/*Dijkstra implementation using STL */
int Graph::dijkstra(int src,int d){
   	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;	
   	vector<int> dist(v,INT_MAX);

	pq.push(make_pair(0,src));
	dist[src] = 0;

	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();

		vector< pair<int,int> >::iterator it;

		for(it=adj[u].begin();it!=adj[u].end();it++){
			int v = (*it).first;
			int w = (*it).second;

			if(dist[u] != INT_MAX && dist[v]>dist[u]+w){
				dist[v] = dist[u]+w;
				pq.push(make_pair(dist[v],v));
			}
		}
	}

	return dist[d];
}

int main(int argc, char const *argv[])
{
   	//std::ios::sync_with_stdio(false);cin.tie(NULL);

   	int t;si(t);
   	while(t--){
   		int r,n,a,v,w;
   		string s,sr,dis;
   		si(n);
   		Graph g(n);
   		unordered_map<string,int> m;
   		for(int i=0;i<n;i++){
   			cin>>s;
   			m[s] = i;
   			si(a);
   			for(int j=0;j<a;j++){
   				si(v);si(w);
   				g.addEdge(i,v-1,w);
   			}	
   		}
   		si(r);
   		while(r--){
   			cin>>sr>>dis;
   			printf("%d\n",g.dijkstra(m[sr],m[dis]));
   		}
   	}

	return 0;
}
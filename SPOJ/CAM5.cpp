#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> adj[100001];
bool visited[100001 ];

void dfs(ll s) {
    visited[s] = true;
    ll l = adj[s].size();
    for(ll i = 0;i < l;++i)    {
     if(visited[adj[s][i]] == false)
         dfs(adj[s][i]);
    }
}


int main() {
    std::ios::sync_with_stdio(false);cin.tie(NULL);

    ll t;cin>>t;
    while(t--){
        ll nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes;                       
        cin >> edges;
    
        for(ll i=0;i<nodes;i++){
            adj[i].clear();
        }                  

        for(ll i = 0;i < edges;++i) {
            cin >> x >> y;     
            adj[x].push_back(y);                   
            adj[y].push_back(x);                   
        }

        memset(visited,false,sizeof(visited));                           

        for(int i = 0;i < nodes;++i) {
            if(visited[i] == false) {
                 dfs(i);
                 connectedComponents++;
            }
        }
        cout << connectedComponents << endl;
    }   
    return 0;
}
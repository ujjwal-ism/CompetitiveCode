#include <bits/stdc++.h>
#define MAX 100004
using namespace std;

typedef long ll;

vector<int> adj[MAX];
vector<int> vis(MAX);

void dfs(int s,ll &d){
    d++;
    vis[s] = true;
    
    for(int i = 0;i < adj[s].size(); i++){
        if(!vis[adj[s][i]]){
            dfs(adj[s][i],d);
        }
    }
}

int main() {
    int q;cin>>q;
    while(q--){
        for(int i=0;i<MAX;i++){
            adj[i].clear();
            vis[i] = false;
        }
        
        int n,m,cl,cr;
        cin>>n>>m>>cl>>cr;
        
        int x,y;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        if(cr >= cl )
            cout<<(ll)n*(ll)cl<<"\n";
        else{
            ll sol = 0;
            ll d;
            
            for(int i=1;i<=n;i++){
                if(!vis[i]){
                    d = 0;
                    dfs(i,d);
                    sol += (d-1)*(ll)cr + (ll)cl;
                }
            }
            cout<<sol<<"\n";
        }
    }
    
    return 0;
}

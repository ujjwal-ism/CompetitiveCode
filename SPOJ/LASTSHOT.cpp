#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <int> adj[10001];
bool visited[10001];

void dfs(int s,int &depth) {
    depth++;
    visited[s] = true;
    int l = adj[s].size();
    for(int i = 0;i < l;++i) {
        if(visited[adj[s][i]] == false){
            dfs(adj[s][i],depth);
        }
    }
}

int main() {

        int nodes, edges, x, y;
        scanf("%d%d",&nodes,&edges);                  

        for(int i = 0;i < edges;++i) {
            scanf("%d%d",&x,&y);     
            adj[x].push_back(y);                                      
        }

        int max = 0;
        for(int i = 1;i <= nodes;++i) {
            memset(visited,false,sizeof(visited));                           

            int depth = 0;
            dfs(i,depth);
            if(depth > max)
                max = depth;
        }
        printf("%d",max);

    return 0;
}
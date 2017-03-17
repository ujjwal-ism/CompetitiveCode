#include <bits/stdc++.h>
using namespace std;
#define MAXN 10000
vector < int > g[MAXN + 1];
int maxWt[MAXN + 1];
bool check[MAXN + 1];
void bfs(int n)
{
    queue <pair<int, int> > q;
    q.push(make_pair(n, 0));
    while (!q.empty())
    {
        int root = q.front().first;
        int wt = q.front().second;
        check[root] = true;
        for(int i = 0; i<g[root].size(); i++)
        {
            if (check[g[root][i]] == false)
            {
                q.push(make_pair(g[root][i], wt + 1));
            }
        }
        maxWt[root] = wt;
        q.pop();
    }
}
int main()
{
    int n,a,b;
    cin>>n;
    vector<pair<int,int> > v[n+9];
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs(1);
    int maxRoot = 0;
    for(int i = 1; i<= n; i++)
        maxRoot = maxWt[maxRoot] < maxWt[i] ? i : maxRoot; 
    memset(maxWt, 0, sizeof(maxWt));
    memset(check, 0, sizeof(check));
    bfs(maxRoot);
    maxRoot = 0;
    for(int i = 1; i<= n; i++)
        maxRoot = max(maxRoot, maxWt[i]);
    cout<<maxRoot<<endl;
    return 0;
}
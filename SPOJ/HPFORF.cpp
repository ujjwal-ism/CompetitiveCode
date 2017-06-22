#include <bits/stdc++.h>
#define MAX 502
#define gc getchar_unlocked
using namespace std;

char forrest[MAX][MAX];
bool visited[MAX][MAX];
int sol[MAX][MAX];
set<pair<int,int> > v;
int row[4] = {-1,0,0,1};
int col[4] = {0,-1,1,0};
int n,m,ans;

void si(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

void dfs(int x,int y){
	if(sol[x][y] != INT_MIN){
		ans += sol[x][y];
		return;
	}

	visited[x][y] = true;
	v.insert(make_pair(x,y));
	for(int i=0;i<4;i++){
		if(forrest[x+row[i]][y+col[i]] == '*')
			ans++;
	}
	for(int i=0;i<4;i++){
		if(forrest[x+row[i]][y+col[i]] == '.' && !visited[x+row[i]][y+col[i]])
			dfs(x+row[i],y+col[i]);
	}
}

int main(int argc, char const *argv[])
{
	int t,k;si(t);
	while(t--){
		si(n);si(m);si(k);
		for(int i=0;i<n;i++){
			scanf("%s",forrest[i]);			
			for(int j=0;j<m;j++){
				visited[i][j] = false;
				sol[i][j] = INT_MIN;
			}
		}
		
		int x,y;
		for(int i=0;i<k;i++){
			si(x);si(y);
			x--;y--;
			ans = 0;
			v.clear();

			dfs(x,y);

			for(auto z : v){
				sol[z.first][z.second] = ans;
			}
			printf("%d\n",ans);
		}
	}	
	return 0;
}
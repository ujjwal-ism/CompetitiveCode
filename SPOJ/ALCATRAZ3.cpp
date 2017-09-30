#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int row[4] = {-1,0,0,1};
int col[4] = {0,-1,1,0};

char s[105][105];
int n,m,k,x,y;
bool flag;
bool vis[105][105];
int cnt;

inline bool isSafe(int nr,int nc){
	if(nr == x && nc == y) {
		cnt++;
		return true;
	}
	return (nr >=0 && nr < n && nc >=0 && nc < m && !vis[nr][nc] && s[nr][nc] == '.');
}

void dfs(int r,int c,int depth){
	if(r == x && c == y ){
		if(depth >= k) flag = true;
		if(cnt != 0) return;
	}

	vis[r][c] = true;
	for(int i=0;i<4;i++){
		if(isSafe(r+row[i],c+col[i]))
			dfs(r+row[i],c+col[i],depth+1);
	}

	vis[r][c] = false;
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	cin>>n>>m>>k>>x>>y;
	x--;y--;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>s[i][j];
	}
	memset(vis,false,sizeof(vis));
	cnt = 0;flag = false;

	if(s[x][y] == '*')
		cout<<"NO";
	else{
		dfs(x,y,0);
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
	}

	return 0;
}
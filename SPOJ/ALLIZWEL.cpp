#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int h,w;
int row[8] = {-1,-1,-1,0,0,1,1,1};
int col[8] = {-1,0,1,-1,1,-1,0,1};
char mat[MAX][MAX];
bool visited[MAX][MAX];
string req = "ALLIZZWELL";
int flag;

inline bool safe(int nr,int nc,int temp){
	return ((nr>=0) && (nr < h) && (nr>=0) && (nr < w) && (mat[nr][nc] == req[temp]) && !visited[nr][nc]);
}

void dfs(int r,int c,int idx){
	if(idx == 9){
		flag = 1;return;
	}
	visited[r][c] = true;

	for(int i=0;i<8;i++){
		if(safe(r+row[i],c+col[i],idx+1))
			dfs(r+row[i],c+col[i],idx+1);
	}
	visited[r][c] = false;
}

int main()
{	
	int t;scanf("%d",&t);

	while(t--){
		scanf("%d%d",&h,&w);
		for(int i=0;i<h;i++)
			scanf("%s",mat[i]);

		memset(visited,false,sizeof(visited));

		flag = 0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(mat[i][j] == 'A'){
					dfs(i,j,0);
					if(flag) break;
				}
			}
			if(flag) break;
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
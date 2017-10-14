#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define MAX 1005
using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

char labyrinth[MAX][MAX];
bool vis[MAX][MAX];
int c,r,x,y;
int d;

int row[4] = {-1,0,0,1};
int col[4] = {0,-1,1,0};

inline bool safe(int nr,int nc){
	return (nr >=0 && nr < r && nc >=0 && nc < c && labyrinth[nr][nc] == '.' && !vis[nr][nc]);
}

void dfs(int i,int j,int depth){
	vis[i][j] = true;
	if(depth > d){
		x = i,y = j;
		d = depth;
	}
	for(int i_r = 0;i_r < 4;i_r++){
		if(safe(i+row[i_r],j+col[i_r])){
			dfs(i+row[i_r],j+col[i_r],depth+1);
		}
	}

}

void dfs1(int i,int j,int depth){
	vis[i][j] = true;
	d = max(depth,d);
	for(int i_r = 0;i_r < 4;i_r++){
		if(safe(i+row[i_r],j+col[i_r])){
			dfs(i+row[i_r],j+col[i_r],depth+1);
		}
	}

}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;scanf("%d",&t);
	while(t--){
		scanf("%d%d",&c,&r);
		for(int i=0;i<r;i++)
			scanf("%s",labyrinth[i]);

		memset(vis,false,sizeof(vis));
		d = 0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(labyrinth[i][j] == '.' && !vis[i][j])
					dfs(i,j,0);
			}
		}

		if(d == 0)
			printf("Maximum rope length is 0.\n");
		else{
			memset(vis,false,sizeof(vis));
			d = 0;
			dfs1(x,y,0);
			printf("Maximum rope length is %d.\n",d);
		}
	}

	return 0;
}
#include <bits/stdc++.h>
#define MAX 51
using namespace std;
int h,w;
char v[MAX][MAX];
bool visited[MAX][MAX];
int dis[MAX][MAX];

inline bool safe(int r,int c,int rnew,int cnew){
	return ((rnew>=0) && (rnew<h) && (cnew>=0) && (cnew<w) && (v[r][c]+1 == v[rnew][cnew]) && !visited[rnew][cnew]);
}

void dfs(int r,int c,int l){
	static int row[8] = {-1,-1,-1,0,0,1,1,1};
	static int col[8] = {-1,0,1,-1,1,-1,0,1};
	
	visited[r][c] = true;
	dis[r][c] = l+1;
	for(int i=0;i<8;i++){
		if(safe(r,c,r+row[i],c+col[i])){
			dfs(r+row[i],c+col[i],dis[r][c]);
		}
	}
	return ;
}

int main(int argc, char const *argv[])
{
	int t = 1;
	while(1){
		cin>>h>>w;
		if(h==0 && w==0)
			break;
		
		for(int i=0;i<h;i++){
			scanf("%s",v[i]);
		}

		memset(visited,false,sizeof(visited));
		memset(dis,0,sizeof(dis));

		int max = 0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(v[i][j] == 'A' && !visited[i][j]){
				  	dfs(i,j,0);	
				}
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++)
				if(dis[i][j] > max)
					max = dis[i][j];
		}
		printf("Case %d: %d\n",t,max);
		t++;
	}

	return 0;
}
#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

struct node{
	char ch;
	int d , r , c;
};

queue<node> q;

char arr[505][505];
int vis[505][505];
int n,m;

void bfs(){
	node temp,t;
	int row[4] = {-1,0,0,1};
	int col[4] = {0,-1,1,0};
	int nr,nc;

	while(!q.empty()){
		temp = q.front();
		q.pop();

		if(arr[temp.r][temp.c] == '*') continue;

		for(int i=0;i<4;i++){
			nr = temp.r + row[i];
			nc = temp.c + col[i];

			if(nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
			if(arr[nr][nc] == '#' || arr[nr][nc] == '*') continue;

			if(arr[nr][nc] == '.'){
				t.ch = temp.ch;
				t.d = temp.d + 1;
				t.r = nr;
				t.c = nc;
				vis[nr][nc] = t.d;
				arr[nr][nc] = t.ch;
				q.push(t);
			}
			else if(vis[nr][nc] == temp.d + 1 && arr[nr][nc] != temp.ch)
				arr[nr][nc] = '*';
		}
	}
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	int t;cin>>t;
	while(t--){
		memset(arr,'\0',sizeof(arr));
		memset(vis,-1,sizeof(vis));

		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
				if(isalpha(arr[i][j])){
					node temp;
					temp.ch = arr[i][j];
					temp.d = 0;
					temp.r = i;
					temp.c = j;
					vis[i][j] = 0;
					q.push(temp);
				}
			}
		}

		bfs();
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
				cout<<arr[i][j];
			cout<<"\n";
		}
		cout<<"\n";
	}	

	return 0;
}
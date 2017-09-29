#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int n,m,k,v;
string s[251];
bool vis[251][251];
bool flag;
int row[4] = {-1,0,0,1};
int col[4] = {0,-1,1,0};

inline bool isSafe(int nr,int nc){
	return (nr >=0 && nr < n && nc >=0 && nc < m && !vis[nr][nc] && s[nr][nc] != '#');
}

void dfs(int r,int c){
	if(s[r][c] == 'k') k++;
	if(s[r][c] == 'v') v++;

	if(r == 0 || r == n-1 || c == 0 || c == m-1) flag = false;

	vis[r][c] = true;
	for(int i=0;i<4;i++){
		if(isSafe(r + row[i], c + col[i]))
			dfs(r + row[i], c + col[i]);
	}
}

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>s[i];

	memset(vis,false,sizeof(vis));

	int rem_sheeps = 0, rem_wolves = 0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!vis[i][j] && s[i][j] != '#'){
				k = 0,v = 0 , flag = true;
				dfs(i,j);

				if(flag){
					if(k > v) rem_sheeps += k;
					else rem_wolves += v;
				}
				else{
					rem_wolves += v;
					rem_sheeps += k;
				}
			}
		}
	}

	cout<<rem_sheeps<<" "<<rem_wolves; 

	return 0;
}
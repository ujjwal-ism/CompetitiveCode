#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
#define gc getchar_unlocked

using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;

void si(int &x){
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main(int argc, char const *argv[])
{
	//std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n,e,T,m;
	si(n);si(e);si(T);si(m);
	
	int graph[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i == j)
				graph[i][j] = 0;
			else
				graph[i][j] = INT_MAX;
		}
	}

	for(int i=0;i<m;i++){
		int a,b,t;
		si(a);si(b);si(t);
		if(graph[a][b] == INT_MAX)
			graph[a][b] = t;
		else{
			graph[a][b] = (graph[a][b] > t) ? t : graph[a][b];
		}
	}

	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(graph[i][k] != INT_MAX && graph[k][j] != INT_MAX && graph[i][k] + graph[k][j] < graph[i][j])
					graph[i][j] = graph[i][k] + graph[k][j];
			}
		}
	}

	int count = 0;
	for(int i=1;i<=n;i++){
		if(graph[i][e] <= T)
			count++;
	}
	printf("%d",count);

	return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);		
 	int t;cin>>t;
 	while(t--) {
 		int n,m;cin>>n>>m;
 		int note[n];
 		for(int i=0;i<n;i++) cin>>note[i];

 		int arr[n+1][m+1];

 		for(int i=0;i<=n;i++)
 			arr[i][0] = true;

 		for(int j=1;j<=m;j++)
 			arr[0][j] = false;

 		for(int i=1;i<=n;i++) {
 			for(int j=1;j<=m;j++) {
 				if(j < note[i-1]) 
 					arr[i][j] = arr[i-1][j];
 				else
 					arr[i][j] = arr[i-1][j] || (arr[i-1][j - note[i-1]]);
 			}
 		}

 		if(arr[n][m]) cout<<"Yes\n";
 		else cout<<"No\n";
 	}

	return 0;
}
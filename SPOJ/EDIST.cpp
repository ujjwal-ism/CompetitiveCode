#include <bits/stdc++.h>

using namespace std;

int editDistance(string X,string Y){
	int n = X.length();
	int m = Y.length();
	int D[n+1][m+1];

	for(int i=0;i<=n;i++)
		D[i][0]=i;
	for(int j=0;j<=m;j++)
		D[0][j]=j;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int a = D[i-1][j]+1;
			int b = D[i][j-1]+1;
			int c = X[i-1]!=Y[j-1]?D[i-1][j-1]+1:D[i-1][j-1];

			D[i][j] = min(min(a,b),c);
		}
	}
	return D[n][m];
}

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	string a,b;
	while(t--){
		cin>>a>>b;
		cout<<editDistance(a,b)<<endl;
	}	

	return 0;
}
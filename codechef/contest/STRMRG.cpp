#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

inline int utility_lcs(string X,string Y) {
	int m = X.length();
	int n = Y.length();
	int L[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0)
				L[i][j]=0;
			else if(X[i-1]==Y[j-1])
				L[i][j]=1+L[i-1][j-1];
			else
				L[i][j]=max(L[i-1][j],L[i][j-1]);
		}
	}
	return (m + n - L[m][n]);
}

int main(int argc, char const *argv[])
{
   	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   	int t;cin>>t;
   	while(t--){
   		int n,m;cin>>n>>m;
   		string a,b;cin>>a>>b;

   		string A = "" , B = "";
   		A += a[0];
   		for(int i=1;i<n;i++){
   			if(a[i] != a[i-1])
   				A += a[i];
   		}

   		B += b[0];
   		for(int i=1;i<n;i++){
   			if(b[i] != b[i-1])
   				B += b[i];
   		}

   		cout<<utility_lcs(A,B)<<endl;

   	}		
   	
	return 0;
}
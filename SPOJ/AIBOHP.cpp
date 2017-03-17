#include <bits/stdc++.h>

using namespace std;

int lcs(string X,string Y){
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
	return L[m][n];
}


int main(int argc, char const *argv[])
{
	int t,l;cin>>t;
	string s,a;
	while(t--){
		cin>>s;
		a = s;
		reverse(s.begin(),s.end());
		l = lcs(a,s);
		cout<<s.length()-l<<endl;
	}
	return 0;
}
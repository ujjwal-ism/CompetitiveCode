#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t,m,n;cin>>t;
	while(t--){
		cin>>m>>n;
		ll A[m][n],B[m][n],C[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++)
				cin>>A[i][j];
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++)
				cin>>B[i][j];
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++)
				cin>>C[i][j];
		}
		ll sol = 0,ma;
		for(int i=0;i<m;i++){
			ma = 0;
			for(int j=0;j<n;j++){
				if(A[i][j] >= B[i][j]){
					if(B[i][j]*C[i][j] > ma)
						ma = B[i][j]*C[i][j];
				}
				else{
					if(A[i][j]*C[i][j] > ma)
						ma = A[i][j]*C[i][j];
				}
			}
			sol += ma;
		}
		cout<<sol<<"\n";
	}

	return 0;
}
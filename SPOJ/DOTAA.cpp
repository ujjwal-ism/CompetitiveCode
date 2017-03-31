#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t,n,m,D,q;cin>>t;
	while(t--){
		cin>>n>>m>>D;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int f = 1;
		for(int i=0;i<m;i++){
			int f1 = 0;
			for(int j=0;j<n;j++){
				if(a[j]-D>0){
					a[j] = a[j] - D;
					f1 = 1;break; 
				}
				if(i==m-1 && j==n-1){
					cout<<"NO"<<endl;
					f = 0;goto END;
				}
			}
			if(f1 == 0 ){
				cout<<"NO"<<endl;f = 0;
				break;
			}
		}
		END:
		if(f==1)
			cout<<"YES"<<endl;
	}

	return 0;
}
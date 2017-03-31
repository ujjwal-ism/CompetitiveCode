#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n;int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>m;int b[m];
		for(int i=0;i<m;i++)
			cin>>b[i];

		int min = 9999999;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(abs(a[i]-b[j])<min)
					min = abs(a[i]-b[j]);
			}
		}
		cout<<min<<endl;
	}

	return 0;
}
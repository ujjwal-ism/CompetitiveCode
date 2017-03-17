#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int m[n],w[n];
		for(int i=0;i<n;i++)
			cin>>m[i];
		for(int i=0;i<n;i++)
			cin>>w[i];

		int sum=0;
		sort(m,m+n);
		sort(w,w+n);
		for(int i=0;i<n;i++)
			sum+=m[i]*w[i];

		cout<<sum<<endl;
	}

	return 0;
}
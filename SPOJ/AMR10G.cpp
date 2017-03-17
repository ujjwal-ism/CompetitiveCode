#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,k;cin>>t;
	while(t--){
		cin>>n>>k;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		sort(v.begin(),v.end());

		int min=INT_MAX;
		for(int i=k-1;i<n;i++){
			if(v[i]-v[i-k+1]<min)
				min = v[i]-v[i-k+1];
		}
		cout<<min<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		map<int,int> m;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			m[arr[i]] = 1;
		}

		int count = 0;
		for(int i=0;i<n;i++){
			if(m[2*arr[i]])
				count++;
		}
		cout<<count<<"\n";
	}

	return 0;
}
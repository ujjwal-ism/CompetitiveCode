#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);

	int n,k;cin>>n>>k;
	int a[n];
	map<int,int> m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]] = 1;
	}
	sort(a,a+n);

	int count = 0;
	for(int i=0;i<n;i++){
		if(m[a[i]+k]==1)
			count++;
	}
	cout<<count;
		
	return 0;
}
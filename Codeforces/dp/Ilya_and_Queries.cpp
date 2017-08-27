#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	string s;cin>>s;
	int n = s.length();

	int a[n];
	for(int i=0;i<n;i++) a[i] = 0;

	for(int i=0;i<n-1;i++){
		if(s[i] == s[i+1])
			a[i+1] = 1;
	}
	for(int i=1;i<n;i++)
		a[i] = a[i] + a[i-1];

	int m;cin>>m;
	int l,r;
	for(int i=0;i<m;i++){
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<"\n";
	}

	return 0;
}
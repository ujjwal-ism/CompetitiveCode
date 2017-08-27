#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	int b[n];
	for(int i=0;i<n;i++) cin>>b[i];

	int m;cin>>m;
	int g[m];
	for(int i=0;i<m;i++) cin>>g[i];

	sort(b,b+n);
	sort(g,g+m);

	int i = 0 , j = 0;
	int count = 0;

	while(i<n && j<m){
		if(abs(b[i]-g[j]) <= 1){
			count++;
			i++;j++;
		}
		else if((b[i]-g[j]) > 1)
			j++;
		else
			i++;
	}
	cout<<count;

	return 0;
}
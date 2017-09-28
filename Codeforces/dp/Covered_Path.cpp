#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int v,w;cin>>v>>w;
	int t,d;cin>>t>>d;

	int ans = v;
	for(int i=1;i<t-1;i++)
		ans += min(v + i*d,w + (t-1)*d - i*d);

	ans += w;
	cout<<ans;	

	return 0;
}
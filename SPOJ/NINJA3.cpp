#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long llu;

int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t;cin>>t;
	llu n,a,b;
	while(t--){
		cin>>n>>a>>b;
		llu q = __gcd(a,b);
		while(q--)
			cout<<n;
		cout<<"\n";
	}

	return 0;
}
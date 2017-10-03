#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;


int main(int argc, char const *argv[])
{
	std::ios::sync_with_stdio(false);cin.tie(NULL);
	int t,a,b,c;cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a>>b>>c;
		cout<<"Case "<<i;
		if(c%__gcd(a,b) == 0)
			cout<<": Yes\n";
		else
			cout<<": No\n";
	}

	return 0;
}